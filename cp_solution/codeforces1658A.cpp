#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n;
	string s;
	cin >> n>>s;
	int c=0,o=0,n_z=0;
	bool zero=false;
	vector<int>z;
	for(int i=0;i<n;++i){
		if(s[i]=='0'){
			z.push_back(i);
		}
	}
	for(int i=0;i<n;++i){
		if(s[i]=='0'){

			zero=true;
			if(o<2 && n_z>0){
				c+=2-o;
				n_z=0;
			}
			o=0;
			n_z++;
		}
		if(s[i]=='1' && zero){
			o++;
		}
	}
	cout<<c<<endl;
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