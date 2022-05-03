#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int x,y;
	cin >> x>>y;
	int x1,x2;
	for(int i=y;i>x;--i){
		if(__gcd(i,x)==1){
			x1=i-x;
			break;
		}
	}
	for(int i=x;i<y;++i){
		if(__gcd(i,y)==1){
			x2=y-i;
			break;
		}
	}
	// cout<<x1<<" "<<x2<<endl;
	cout<<max(x1,x2)<<endl;
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