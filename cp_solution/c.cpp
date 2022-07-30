#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int a,b;
	cin>>a>>b;
	int ma=max(a,b),mi=min(a,b);
	int sum=ma;
	ma--;
	if(mi>ma)
		sum+=mi;
	else
		sum+=ma;
	cout<<sum<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	// cin >> t;
	while(t--)
		solve();
	
}