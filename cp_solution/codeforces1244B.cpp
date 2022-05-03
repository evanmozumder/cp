#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n,in=10000,temp_in;
	string s;
	bool noOne = true;
	cin >> n;
	cin >> s;
	int l = s.length();
	if(s[0]==1 || s[-1]==1)
		cout << n*2 << endl;
	else {
		for(int i=0;i<l;++i){
			if(s[i]=='1'){
				noOne = false;
				temp_in = i;
				if(temp_in>=ceil((l-1)/2.0))
					temp_in = l-1-i;
				if(temp_in<in)
					in = temp_in;
			}
		}
		if(noOne)
			cout << n << endl;
		else
			cout << n*2-(in*2) << endl;
	}
	
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	
	int t;
	cin >> t;
	while(t--)
		solve();
	
	return 0;
}