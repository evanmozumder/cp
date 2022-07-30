#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n;
	cin>>n;
	if(n%2!=0)
		cout<<-1<<endl;
	else{
		cout<<0<<" "<<0<<" "<<n/2<<endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	cin >> t;
	while(t--)
		solve();
	
}