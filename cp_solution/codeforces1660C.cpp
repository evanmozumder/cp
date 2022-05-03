#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	string s;
	cin >> s;
	ll l=s.length();
	ll ans=l;
	map<char, bool>v;
	for(int i=0;i<l;++i){
		if(v[s[i]]){
			ans-=2;
			v.clear();
		}else
			v[s[i]]=true;
	}
	cout<<ans<<endl;
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