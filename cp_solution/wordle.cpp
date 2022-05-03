#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	string s,t;
	cin >>s>>t;
	for(int i=0;i<s.length();++i){
		if(s[i]==t[i]){
			s[i]='g';
		}else{
			s[i]='b';
		}
	}
	cout<<s<<endl;
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