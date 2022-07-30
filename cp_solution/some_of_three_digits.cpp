#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int k,s,cnt=0,sum=0;
	cin>>k>>s;
	for(int i=0;i<=k;++i){
		for(int j=0;j<=k;++j){
			int l=s-i-j;
			if(l>=0 and l<=k)
				cnt++;
		}
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