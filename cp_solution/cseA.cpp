#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n,k;
	cin>>n>>k;
	while(k--){
		if(n%10!=0){
			n--;
		}else {
			n=n/10;
		}
	}
	cout<<n<<"\n";
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	// cin >> t;
	while(t--)
		solve();
	
}