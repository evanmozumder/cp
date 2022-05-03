#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll s;
	cin >> s;
	cout<<(s*(-1)-1)<<endl;
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