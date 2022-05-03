#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n,k;
	cin >> n>>k;
	ll a[n],s=0;
	for(int i=0;i<n;++i)
		cin >> a[i];
	sort(a,a+n);
	bool check=false;
	// for(int i=0;i<n;++i)
	// 	cout<<a[i]<<" ";
	// cout<<endl;
	for(int i=0;i<n-1;++i){
		// for(int j=i+1;j<n;++j){
		// 	if(a[i]+k==a[j]){
		// 		check=true;
		// 		break;
		// 	}
		// }
		if(binary_search(a+i+1,a+n,a[i]+k)){
			check=true;
			break;
		}
		// if(check)
		// 	break;
	}
	if(check)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
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