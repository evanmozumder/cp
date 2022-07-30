#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	string s;
	cin>>s;
	for(int i=0;i<s.length();i+=2){
		cout<<s[i];
		if(i==0)
			i=-1;
	}
	cout<<"\n";
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	cin >> t;
	while(t--)
		solve();
	
}