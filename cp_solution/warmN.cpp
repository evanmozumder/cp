#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n;
	cin>>n;
	ll a[n],ma=0;
	for(int i=0;i<n;++i){
		cin>>a[i];
		if(i!=0){
			ma=max(ma,(a[i]*a[i-1]));
		}
	}
	cout<<ma<<"\n";
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	cin >> t;
	while(t--)
		solve();
	
}