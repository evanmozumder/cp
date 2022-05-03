#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n,x,m,s=0;
	cin >> n >> x;
	int arr[n];
	// cout << max <<endl;
	s=x;
	m=x;
	for(int i=0;i<n;++i){
		cin >> arr[i];
		s+=arr[i];
		if(s>m){
			m=s;
			// cout << m <<endl;
		}
	}
	cout << m << endl;
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