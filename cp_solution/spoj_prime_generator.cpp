#include<bits/stdc++.h>
#define ll long long int

using namespace std;

bool isPrime(ll n){
	for(int i=2;i<=sqrt(n);++i){
		if(n%i==0)
			return false;
	}
	return true;
}

void solve() {
	ll m,n;
	cin >> m>>n;
	for(int i=m;i<=n;++i){
		if(isPrime(i) && i!=1)
			cout<<i<<"\n";
	}
	cout<<"\n";
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	cin >> t;
	while(t--)
		solve();
	
}