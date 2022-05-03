#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	map<int, int>m;
	vector<int>v{1,2,3,4,5,1,2,3,4,9,10};
	for(int i=0;i<v.size();++i){
		m[v[i]]++;
	}
	for(auto ii:m){
		cout<<ii.first<<" "<<ii.second<<endl;
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	// int t=1;
	// cin >> t;
	// while(t--)
		solve();
	
}