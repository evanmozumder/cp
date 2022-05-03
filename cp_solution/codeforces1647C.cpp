#include<bits/stdc++.h>
#define ll long long int
#define for_loop(i,in,la) for(int i=in;i<=la;++i)
#define back_loop(i,in,la) for(int i=la;i>=in;--i)

using namespace std;

void solve() {
	int n,m;
	cin >> n>>m;
	int op=0;
	bool check=true;
	char ar[n][m];
	vector< pair< pair<int,int>, pair<int,int> >>sol;
	for_loop(i,0,n-1){
		for_loop(j,0,m-1)
			cin >> ar[i][j];
	}
	for(int i=n-1;i>=0;--i){
		for(int j=m-1;j>=0;--j){
			if(ar[i][j]=='1'){
				if(j-1>=0){
					op++;
					sol.push_back({{i,j-1},{i,j}});
				} else if(i-1>=0){
					op++;
					sol.push_back({{i-1,j},{i,j}});
				}else{
					check=false;
					break;
				}
			}
			if(!check)
				break;
			// if(ar[i][j]=='1' && ar[i-1][j]=='1' && ar[i][j-1]=='1')
			// 	check=false;
			// else if(ar[i][j]=='1' && ar[i][j-1]=='0'){
			// 	op++;
			// 	sol.push_back({{i,j-1},{i,j}});
			// } else if(ar[i][j]=='1' && ar[i-1][j]=='0'){
			// 	op++;
			// 	sol.push_back({{i-1,j},{i,j}});
			// }
		}
	}
	if(!check)
		cout<<"-1"<<endl;
	else{
		cout<<op<<endl;
		for(int i=0;i<sol.size();++i){
			cout<<(sol[i].first.first)+1<<" "<<(sol[i].first.second)+1<<" "<<(sol[i].second.first)+1<<" "<<(sol[i].second.second)+1<<endl; 
		}
	}
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