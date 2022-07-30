#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n,sum=0;
	cin>>n;
	ll a[n];
	for(int i=0;i<n-1;++i){
		cin>>a[i];
		sum+=a[i];
		// cout<<sum<<endl;
	}
	// cout<<sum<<endl;
	cout<<((n*(n+1))/2)-sum<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	// cin >> t;
	while(t--)
		solve();
	
}