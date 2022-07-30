#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n;
	cin>>n;
	int p[n];
	for(int i=0;i<n;++i)
		cin>>p[i];
	int inc_pair=0,dec_pair=0;
	// int 
	pair<int, int>inc[(n*(n-1))/2];
	pair<int, int>dec[(n*(n-1))/2];
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(p[i]<p[j]){
				inc[i]={p[i],p[j]};
				inc_pair++;
			}else if(p[i]>p[j]){
				dec[i]={p[i],p[j]};
				dec_pair++;
			}
		}
	}
	for(int i=0;i<inc_pair;++i)
		cout<<inc[i].first<<" "<<inc[i].second<<endl;
	cout<<endl;
	for(int i=0;i<dec_pair;++i)
		cout<<dec[i].first<<" "<<dec[i].second<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	cin >> t;
	while(t--)
		solve();
	
}