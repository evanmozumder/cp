#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n;
	cin >> n;
	ll a[n];

	ll in,sn;
	for(int i=0;i<n;++i){
		cin >> a[i];
		
	}
	ll ma=*max_element(a,a+n);
	ll mi=*min_element(a,a+n);
	// cout<<ma<<" "<<mi<<endl;
	for(int i=0;i<n;++i){
		if(a[i]==ma){
			in=i;
		}
		if(a[i]==mi)
			sn=i;
	}
	// for(int i=0;i<n;++i){
	// 	if(a[i]>sm && a[i]<=fm && i!=in)
	// 		sn=i;
	// }
	cout<<in+1<<" "<<sn+1<<endl;
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