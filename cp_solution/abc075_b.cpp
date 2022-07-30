#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int h,w;
	cin>>h>>w;
	string c[h];
	for(int i=0;i<h;++i){
		cin>>c[i];
	}
	for(int i=0;i<h;++i){
		for(int j=0;j<w;++j){
			if(c[i][j]=='.'){
				int a=0,k=i-1,l=j-1,kr=i+2,lc=j+2;
				if(i==0)
					k=i;
				if(j==0)
					l=j;
				if(i==h-1)
					kr=i+1;
				if(j==w-1)
					lc=j+1;
				int prev_l=l;
				for(k;k<kr;k++){
					for(l;l<lc;l++){
						if(c[k][l]=='#')
							a++;
						// cout<<"k = "<<k<<"  l = "<<l<<"\n";
					}
					l=prev_l;
				}
				cout<<a;
			}else{
				cout<<c[i][j];
			}
		}
		cout<<"\n";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	// cin >> t;
	while(t--)
		solve();
	
}