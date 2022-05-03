#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n,num_of_one=0,num_of_zero=0;
	string s;
	char f='1';
	cin >> n>>s;
	for(int i=0;i<n;++i){
		if(s[i]=='1')
			num_of_one++;
		else
			num_of_zero++;
	}
	for(int i=0;i<num_of_zero;++i)
		cout<<'0';
	for(int i=0;i<num_of_one;++i)
		cout<<'1';
	cout<<endl;
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