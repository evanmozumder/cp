#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll h,n,sum=0;
	cin>>h>>n;
	ll a[n];
	for(ll i=0;i<n;++i){
		cin>>a[i];
		sum+=a[i];
	}
	// cout<<(a[i]>=h)?("Yes":"No")<<endl;
	if(sum>=h)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	// cin >> t;
	while(t--)
		solve();
	
}