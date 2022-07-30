#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n;
	cin>>n;
	ll a[n],zero=0;
	for(int i=0;i<n;++i){
		cin>>a[i];
		if(a[i]==0)
			zero++;
	}
	sort(a,a+n);
	for(int i=0;i<n;++i){
		if(i==0 and zero!=0){
			i+=zero;
			cout<<a[i]<<" ";
			while(zero--)
				cout<<0<<" ";
		} else {
			cout<<a[i]<<" ";
		}
	}
	cout<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	cin >> t;
	while(t--)
		solve();
	
}