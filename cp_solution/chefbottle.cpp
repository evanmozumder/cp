#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n,x,k;
	cin >> n>>x>>k;
	cout<<min(n,(k/x))<<endl;
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