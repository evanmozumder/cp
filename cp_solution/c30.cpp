#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n,o=0,le=0,val;
	cin>>n;
	ll a[n];
	ll i=1,p=1;
	while(le<n){
		cin>>a[i-1];
		if(a[i-1]>=p){
			o+=a[i-1]-p;
			p=a[i-1];
		}
		le++;
		i++;
		p++;
	}
	cout<<o<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	cin >> t;
	while(t--)
		solve();
	
}