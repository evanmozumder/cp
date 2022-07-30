#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n,o=0,sum=0,o_sum=0,mi=0;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;++i){
		cin>>a[i];
		if(a[i]%2!=0){
			if(mi==0)
				mi=a[i];
			if(a[i]<mi)
				mi=a[i];
		}
		sum+=a[i];
	}
	if(sum%2!=0)
		sum-=mi;
	cout<<sum<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	// cin >> t;
	while(t--)
		solve();
	
}