#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n,w;
	cin >> n>>w;
	int a[n];
	for(int i=0;i<n;++i)
		cin >> a[i];
	sort(a,a+n,greater<int>());
	int sum=0;
	for(int i=0;i<n;++i){
		sum+=a[i];
		if(sum>=w){
			cout << n-i-1 << endl;
			break;
		}
	}
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