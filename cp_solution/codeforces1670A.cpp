#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n,neg=0,in;
	cin>>n;
	ll a[n];
	bool ans=true;
	for(int i=0;i<n;++i){
		cin>>a[i];
		if(a[i]<0)
			neg++;
	}
	// cout<<"Neg = "<<neg<<"\n";
	for(int i=0;i<n;++i){
		if((i<neg && a[i]>0) || (i>=neg && a[i]<0))
			a[i]*=(-1);
	}
	// for(int i=0;i<n;++i)
	// 	cout<<a[i]<<" ";
	// cout<<"\n";
	if(is_sorted(a,a+n))
		cout<<"YES"<<"\n";
	else
		cout<<"NO"<<"\n";
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	cin >> t;
	while(t--)
		solve();
	
}