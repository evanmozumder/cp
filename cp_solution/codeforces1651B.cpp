#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n;
	cin >> n;
	if(n>=20)
		cout<<"NO"<<endl;
	else{
		cout<<"YES"<<endl;
		int v=1;
		cout<<v<<" ";
		for(int i=1;i<n;++i){
			v*=3;
			cout<<v<<" ";
		}
		cout<<endl;
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