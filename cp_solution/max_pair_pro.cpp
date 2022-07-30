#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n;
	cin>>n;
	ll a[n];
	ll ma=-1,mi=-1;
	for(ll i=0;i<n;++i){
		cin>>a[i];
		if(a[i]>=ma){
			mi=ma;
			ma=a[i];
		}else if(a[i]>=mi){
			mi=a[i];
		}
	}
	cout<<ma*mi<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	while(t--)
		solve();
}