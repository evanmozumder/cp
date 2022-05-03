#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll factorial(ll n){
  // single line to find factorial
  // return (n==1 || n==0) ? 1: (n * factorial(n - 1))%998244353;
  ll fact=1;
  for(int i=1;i<=n;++i){
  	fact=fact%998244353;
  	fact*=i;
  }
  return fact%998244353;
}

void solve() {
	int n;
	cin >> n;
	if(n%2!=0)
		cout<<0<<endl;
	else{
		ll fact=factorial(n/2)%998244353;
		cout<<(fact*fact)%998244353<<endl;
	}
	// cout<<__gcd(3,4)<<endl;

	// cout<<factorial(1000)<<endl;
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