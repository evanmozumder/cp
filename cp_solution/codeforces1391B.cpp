#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n,m,ch=0;
	string s;
	cin >> n >> m;
	while(n--){
		cin >> s;
		if(n!=0){
			// cout << s[s.length()-1] << endl;
			if(s[s.length()-1]=='R')
				ch++;
		}
		else{
			while(m--){
				if(s[m]=='D')
					ch++;
			}
		}
	}
	cout << ch << endl;
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
	
}