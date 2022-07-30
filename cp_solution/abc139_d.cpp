#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n;
	cin>>n;
	n--;
	if(n%2==0)
		cout<<(n/2)*(n+1)<<"\n";
	else
		cout<<((n+1)/2)*n<<"\n";
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	// cin >> t;
	while(t--)
		solve();
	
}