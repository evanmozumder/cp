#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n,o=0;
	cin>>n;
	ll a[n];
	bool all_zero=true;
	for(int i=0;i<n;++i){
		cin>>a[i];
		if(a[i]!=0 and all_zero)
			all_zero=false;
	}
	if(all_zero)
		cout<<0<<endl;
	else{
		bool s=false;
		for(int i=0;i<n;++i){
			if(a[i]==0 and i!=0 and i!=n-1 and a[i-1]!=0 and !s){
				s=true;
			}else if(a[i]!=0 and s){
				o=2;
				break;
			}else {
				o=1;
			}
		}
		cout<<o<<endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	cin >> t;
	while(t--)
		solve();
	
}