#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n,m;
	cin >> n>>m;
	char a[n][m];
	// vector<vector<string>>a(n,m);
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			cin >> a[i][j];
		}
	}
	bool e=true;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			/*
				0 1
				1 1
			*/
			if(a[i][j]=='0' && j+1<m && a[i][j+1]=='1' && i+1<n && a[i+1][j]=='1' && a[i+1][j+1]=='1'){
				e=false;
			}
			/*
				1 0
				1 1
			*/
			if(a[i][j]=='0' && j-1>=0 && a[i][j-1]=='1' && i+1<n && a[i+1][j-1]=='1' && a[i+1][j]=='1'){
				e=false;
			}
			/*
				1 1
				0 1
			*/
			if(a[i][j]=='0' && j+1<m && a[i][j+1]=='1' && i-1>=0 && a[i-1][j]=='1' && a[i-1][j+1]=='1'){
				e=false;
			}
			/*
				1 1
				1 0
			*/
			if(a[i][j]=='0' && j-1>=0 && a[i][j-1]=='1' && i-1>=0 && a[i-1][j-1]=='1' && a[i-1][j]=='1'){
				e=false;
			}
		}
	}
	if(e)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int t=1;
	cin >> t;
	while(t--)
		solve();
	
}