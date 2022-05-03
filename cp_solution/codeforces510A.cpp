#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n,m;
	bool check=true;
	cin >> n >> m;
	for(int i=0;i<n;++i){
		if(i==0 || i%2==0){
			for(int j=0;j<m;++j)
				cout << "#";
			cout << endl;
		}
		else{
			if(check){
				for(int j=0;j<m;++j){
					if(j!=m-1)
						cout << ".";
					else
						cout << "#";
				}
				cout << endl;
				check=false;
			}else{
				for(int j=0;j<m;++j){
					if(j==0)
						cout << "#";
					else
						cout << ".";
				}
				check=true;
				cout << endl;
			}
		}
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	
	// int t;
	// cin >> t;
	// while(t--)
	solve();
	
	return 0;
}