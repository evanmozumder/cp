#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n;
	cin>>n;
	ll l[n];
	for(ll i=0;i<n;++i){
		cin>>l[i];
	}
	ll i=n-1,j=i-1,a=n;
	// int a=n;
	while(i>0 && j>=0){
		if(j<i and j>=(i-l[i])){
			a--;
			j--;
		}else {
			i--;
			j--;
		}
	}
	cout<<a<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	// cin >> t;
	while(t--)
		solve();
	
}