#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n,s=0;
	cin >> n;
	ll a[n];
	for(int i=0;i<n;++i){
		cin >> a[i];
		s+=a[i];
	}
	ll m=s,sn=0;
	for(int i=0;i<n;++i){
		sn+=a[i];
		if(max(sn,s-sn)<m)
			m=max(sn,s-sn);
	}
	cout<<m<<endl;
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