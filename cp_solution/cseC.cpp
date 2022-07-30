#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;++i)
		cin>>a[i];
	sort(a,a+n);
	ll prob=0;
	for(int i=1;i<n;i+=2){
		prob+=a[i]-a[i-1];
	}
	cout<<prob<<"\n";
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	// cin >> t;
	while(t--)
		solve();
	
}