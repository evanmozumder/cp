#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll l,r,a;
	cin >>l>>r>>a;
	ll l1=(((r/a)-1)*a)+a-1;
	if(l1>=l)
		cout<<max(((r/a)+(r%a)),(r/a)-1+a-1)<<endl;
	else
		cout<<(r/a)+(r%a)<<endl;
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