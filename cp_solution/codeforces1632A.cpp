#include<bits/stdc++.h>
#define ll long long int

using namespace std;

string rev_str(string s){
	int n=s.size();
	string rs="";
	for(int i=n-1;i>=0;--i){
		rs+=s[i];
	}
	return rs;
}

void solve() {
	int n;
	string s;
	cin >> n >> s;
	if(n>=3)
		cout << "NO" << endl;
	else if(n==2 && s!=rev_str(s))
		cout << "YES" << endl;
	else if(n==2 && s==rev_str(s))
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
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