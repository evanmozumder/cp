#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;

bool reachValue(ll num){
	if(n<num)
		return false;
	else if(n==num)
		return true;
	else{
		return reachValue(num*10) || reachValue(num*20);
	}
}

void solve() {
	cin>>n;
	ll num=1;
	if(reachValue(1))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	cin >> t;
	while(t--)
		solve();
	
}