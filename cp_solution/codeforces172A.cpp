#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<string>s(n);
	vector<char>m;
	int si;
	for(int i=0;i<n;++i){
		cin >> s[i];
		// cout<<s[i][4]<<endl;
		bool check=true;
		for(int j=0;j<s[i].length() && i==1 && check;++j){
			if(s[i][j]==s[i-1][j])
				m.push_back(s[i][j]);
			else
				check=false;
		}
		si=m.size();
		// for(int i=0;i<si;++i)
		// 	cout<<m[i]<< " ";
		// cout<<endl;
		for(int j=si-1;j>=0 && i>1;j--){
			if(s[i][j]!=m[j]){
				m.erase(m.begin()+j);
				si--;
			}
		}
	}
	cout<<si<<endl;
	// for(int i=0;i<s[0].length();++i){
	// 	if()
	// }
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int t=1;
	// cin >> t;
	while(t--)
		solve();
	
}