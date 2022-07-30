#include<bits/stdc++.h>
#define ll long long int

using namespace std;

bool is_prime(int n){
	if(n<=1)
		return false;
	for(int i=2;i<n;++i){
		if(n%i==0)
			return false;
	}
	return true;
}

bool is_almost_prime(int n){
	int cnt=0;
	for(int i=1;i<=n;++i){
		if(n%i==0 && is_prime(i))
			cnt++;
	}
	if(cnt==2)
		return true;
	return false;
}


void solve() {
	int n,cnt=0;
	cin>>n;
	for(int i=1;i<=n;++i){
		if(is_almost_prime(i))
			cnt++;
	}
	cout<<cnt<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	// cin >> t;
	while(t--)
		solve();
	
}