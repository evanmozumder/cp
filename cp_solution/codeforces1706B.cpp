#include<bits/stdc++.h>
#define ll long long int

using namespace std;
const int sz = 1e5+5;
vector<int>a[sz];
void solve() {
	int n;
	cin>>n;
	// int a[n][n];
	for(int i=1; i<=n; i++) a[i].clear();
	for(int i=1;i<=n;++i){
		int x;
		cin>>x;
		a[x].push_back(i);
	}
	for(int i=1;i<=n;++i){
		if(a[i].empty())
			cout<<"0 ";
		else {
			int op=1;
			// cout<<a[i][0]<<"\n";
			for(int j=1;j<a[i].size();++j){
				if((a[i][j]-a[i][j-1])%2==1)
					op++;
			}
			cout<<op<<" ";


			// int x = a[i][0] & 1, cnt = 0;
   //   	for(int v : a[i]){
	  //     if((v & 1) == x) {
	  //       x ^= 1;
	  //       cnt++;
	  //    	}
	  //  	}
   //   // printf("%d ", cnt);
   //   cout<<cnt<<" ";
		}
	}
	cout<<"\n";
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	cin >> t;
	while(t--)
		solve();
	
}