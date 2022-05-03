#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int x,y;
	cin>>x>>y;
	int re=sqrt(x*x+y*y);
	if(x==0 && y==0)
		cout<<0<<endl;
	else if(re*re==(x*x+y*y))
		cout<<1<<endl;
	else
		cout<<2<<endl;
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