#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n,sum=0;
	cin >> n;
	int a[n];
	for(int i=0;i<n;++i){
		cin >> a[i];
	}
	sum=(sum|a[0]);
	for(int i=1;i<n;++i){
		// cout << (a[i]|a[i+1]) << endl;
		sum = (sum|a[i]);
	}
	cout << sum << endl;
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