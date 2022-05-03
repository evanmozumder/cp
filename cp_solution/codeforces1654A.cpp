#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n;
	cin >> n;
	ll a[n];
	ll m=0;
	int in;
	for(int i=0;i<n;++i){
		cin >> a[i];
		if(a[i]>m){
			m=a[i];
			in=i;
		}
	}
	ll sm=0;
	for(int i=0;i<n;++i){
		if(a[i]>sm && a[i]<=m && i!=in)
			sm=a[i];
	}
	cout<<sm+m<<endl;
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