#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n;
	cin >>n;
	string s;
	cin >> s;
	if(s[0]=='0' || s[1]=='0' || s[n]=='0')
		cout << "NO" << endl;
	else {
		vector<int>ve;
		ve.push_back(0);
		int h=1;
		for(int i=2;i<s.size()-1;++i){
			if(s[i]=='0')
				ve.push_back(i);
			else {
				ve.push_back(h);
				h=i;
			}
		}
		ve.push_back(h);
		cout << "YES" << endl;
		for(int i=0;i<ve.size();++i)
			cout << ve[i] << " ";
		cout << endl;
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