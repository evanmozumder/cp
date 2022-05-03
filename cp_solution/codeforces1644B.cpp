#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n;
	cin >> n;
	for(int i=1;i<=n;++i){
		cout << i << " ";
		for(int j=n;j>=1;--j){
			if(i!=j){
				cout << j << " ";
			}
		}
		cout << endl;
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