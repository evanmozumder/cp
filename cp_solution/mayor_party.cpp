#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int a,b,c;
	cin >> a >>b>>c;
	if(a+c>b)
		cout << a+c << endl;
	else
		cout << b << endl;
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