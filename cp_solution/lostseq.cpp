#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n;
	cin >> n;
	n=2*n;
	int b[n];
	int sum=0;
	bool ans =true;
	for(int i=0;i<n;++i){
		cin >> b[i];
		sum+=b[i];
	}

	// for(int i=0;i<n-1;i+=2){
	// 	// cout << i << endl;
	// 	if((b[i]+b[i+1])%2==0)
	// 		ans=true;
	// 	else{
	// 		ans=false;
	// 		break;
	// 	}
	// }
	if(sum%2==0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
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