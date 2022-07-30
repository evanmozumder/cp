#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n,x;
	cin>>n>>x;
	ll a[n];
	vector<ll>b;
	for(ll i=0;i<n;++i){
		cin>>a[i];
		if(a[i]!=x)
			b.push_back(a[i]);
	}
	for(ll i=0;i<b.size();++i)
		cout<<b[i]<<" ";
	cout<<"\n";
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	// cin >> t;
	while(t--)
		solve();
	
}