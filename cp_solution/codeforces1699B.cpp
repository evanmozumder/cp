#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n,m;
	cin>>n>>m;
	int c=0;
	bool one=false, zero=false;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			if(j==0){
				if((i%4==0) or i%4==3){
					cout<<1<<" ";
					one=true;
				}
				else{
					cout<<0<<" ";
					zero=true;
				}
			}else {
				if(one and c<2){
					cout<<0<<" ";
					c++;
				}else if(one){
					c=0;
					one=false;
					zero=true;
				}
				if(zero and c<2){
					cout<<1<<" ";
					c++;
				}else if(zero){
					cout<<0<<" ";
					c=1;
					zero=false;
					one=true;
				}
			}
		}
		cout<<endl;
		one=false,zero=false,c=0;
	}
	cout<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	cin >> t;
	while(t--)
		solve();
	
}