#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n,o=0;
	cin >> n;
	int a[n];
	for(int i=0;i<n;++i)
		cin >> a[i];
	for(int i=1;i<n-1;++i){
		if(a[i]>a[i+1] && a[i]>a[i-1]){
			o++;
			if(a[i]>a[i+2])
				a[i+1]=a[i];
			else
				a[i+1]=a[i+2];
		}
	}
	cout << o << endl;
	for(int i=0;i<n;++i)
		cout << a[i] << " ";
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