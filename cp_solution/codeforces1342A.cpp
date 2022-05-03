#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll x,y,a,b;
	cin >>x>>y>>a>>b;
	ll s1=0,s2=0;
	b = min(b, a + a);
  if(x < y){
  	int temp = x;
  	x=y;
  	y=temp;
  }
  cout << y * b + (x - y) * a << endl;
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
	
	return 0;
}