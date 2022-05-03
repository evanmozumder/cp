#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int x,y,a,b;
	cin >> x>>y>>a>>b;
	int ma=2;
	if(x==a || x==b)
		ma--;
	if(y==a || y==b)
		ma--;
	cout<<ma<<endl;
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