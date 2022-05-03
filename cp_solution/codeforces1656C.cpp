#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n;
	cin >> n;
	ll a[n];
	for(int i=0;i<n;++i)
		cin >> a[i];
	sort(a,a+n);
	bool one=false,co=false;
	for(int i=0;i<n;++i){
		if(a[i]==1)
			one=true;
		if(a[i]+1==a[i+1] && i<n-1)
			co=true;
	}
	cout<<((one&&co)?"NO":"YES")<<endl;
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