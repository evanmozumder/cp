#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n,x;
	cin >> n>>x;
	int a,b,c;
	c=(n+x)-(((n+x)/4)*4);
	a=(n+x-c)/4;
	b=n-a-c;
	if(a<0 || b<0 || c<0)
		cout<<"NO"<<endl;
	else{
		cout<<"YES"<<endl;
		cout<<a<<" "<<b<<" "<<c<<endl;
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