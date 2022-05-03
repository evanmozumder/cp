#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int a[10];
	for(int i=0;i<10;++i)
		cin >> a[i];
	int t=3;
	int n,j=0;
	while(t--){
		n=a[j];
		j=n;
	}
	cout<<n<<endl;
}

int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);
// #endif

// 	int t=1;
// 	cin >> t;
// 	while(t--)
		solve();
	
}