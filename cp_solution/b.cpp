#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int a,b;
	cin>>a>>b;
	if((b-a+1)>0)
		cout<<b-a+1<<endl;
	else
		cout<<0<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	// cin >> t;
	while(t--)
		solve();
	
}