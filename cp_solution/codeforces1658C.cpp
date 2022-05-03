#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n;
	cin >> n;
	int c[n];
	bool one_found=false,ans=false;
	vector<int>ar;
	vector<int>ar_n;
	for(int i=0;i<n;++i)
		cin >> c[i];
	for(int i=0;i<n;++i){
		if(c[i]==1){
			if(!one_found){
				one_found=true;
			}
			else{
				one_found=false;
				break;
			}
			ar.push_back(c[i]);
		} else if(one_found){
				ar.push_back(c[i]);
		} else if(!one_found){
				ar_n.push_back(c[i]);
		}
	}
	if(one_found)
		ans=true;
	else
		ans=false;
	if(ans){
		ar.insert(ar.end(),ar_n.begin(),ar_n.end());
		for(int i=1;i<n;++i){
			if(ar[i]-ar[i-1]<=1)
				continue;
			else{
				ans=false;
				break;
			}
		}
	}
	if(ans)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int t=1;
	cin >> t;
	while(t--)
		solve();
	
}