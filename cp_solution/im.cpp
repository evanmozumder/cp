#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int s,t,o=0;
	cin>>s>>t;
	for(int i=0;i<=s;i++){
		for(int j=0;j<=s;++j){
			for(int k=0;k<=s;++k){
				if((i+j+k)<=s and (i*j*k)<=t){
					// cout<<i<<" "<<j<<" "<<k<<"\n";
					o++;
				}
			}
		}
	}
	cout<<o<<"\n";
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	// cin >> t;
	while(t--)
		solve();
	
}