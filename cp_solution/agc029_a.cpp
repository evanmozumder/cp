#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	string s;
	cin>>s;
	ll o=0,pos=0,si=s.size();
	for(int i=0;i<si;++i){
		if(s[i]=='W'){
			o+=i-pos;
			pos++;
		}
	}
	cout<<o<<"\n";
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	// cin >> t;
	while(t--)
		solve();
	
}