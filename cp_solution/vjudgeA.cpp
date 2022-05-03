#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int a,b,k,i=1,c=1;
	cin >> a >> b >> k;
	while(c<=k){
		if(a%i==0 && b%i==0){
			if(c!=k)i++;
			c++;
		}else
			i++;
	}
	cout << i << endl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	// int t=1;
	// cin >> t;
	// while(t--)
		solve();
	
}