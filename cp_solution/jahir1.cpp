#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n,k,a,ans;
	cin>>n>>k>>a;
	if(a!=1){
		k-=(n+1-a);
	}
	if(k%n==0)
		ans=n;
	else
		ans=k%n;
	if(ans>0)
		cout<<ans<<"\n";
	else
		cout<<n+ans<<"\n";
	// while(k--){
	// 	// cout<<a<<"\n";
	// 	if(a>=n && k!=0)
	// 		a=1;
	// 	else if(k!=0)
	// 		a++;
	// }
	// cout<<a<<"\n";
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	cin >> t;
	while(t--)
		solve();
	
}