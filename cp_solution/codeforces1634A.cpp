#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n;
	cin >> n;
	for(int i=0;i<n;++i)
		cout << i << " ";
	cout << endl;
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
	
	return 0;
}