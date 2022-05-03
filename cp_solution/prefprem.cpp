#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n,k;
	cin >> n>>k;
	int a[k];
	for(int i=0;i<k;++i)
		cin >> a[i];
	int s=0;
	for(int i=0;i<k;++i){
		for(int j=a[i];j>s;j--)
			cout << j <<" ";
		s=a[i];
	}
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
	
}