#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n;
	cin >> n;
	int d=1;
	if(n<6)
		cout<<0<<endl;
	else if(n==6)
		cout<<1<<endl;
	else{
		n-=6;
		cout<<(n/7)+d<<endl;	
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