#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n;
	cin>>n;
	ll a[n],b[n],p=0;
	for(int i=0;i<n;++i)
		cin>>a[i];
	for(int i=0;i<n;++i)
		cin>>b[i];
	for(int i=0;i<n-1;++i){
		for(int j=i+1;j<n;++j){
			if(a[i]==b[j]&&b[i]==a[j])
				p++;
		}
	}
	cout<<p<<"\n";
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	cin >> t;
	while(t--)
		solve();
	
}