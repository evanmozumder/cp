#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll pow_fun(ll exponent){
	ll result=1;
	while (exponent != 0) {
    result *= 2;
    --exponent;
	}
	return result;
}

void solve() {
	ll n,sum=0,po;
	cin>>n;
	po=log2(n);
	for(ll i=0;i<=po;++i)
		sum+=pow_fun(i);
	cout<<((n*(n+1))/2)-(2*sum)<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	cin >> t;
	while(t--)
		solve();
	
}