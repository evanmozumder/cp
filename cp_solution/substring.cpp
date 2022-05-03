#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	string s;
	cin >> s;
	int l=0,cl=0;
	for(int i=1;i<s.length()-1;++i){
		if(s[i]!=s[0] && s[i]!=s[s.length()-1]){
			cl++;
			if(cl>l)
				l=cl;
		} else{
			cl=0;
		}
	}
	if(l==0)
		cout<<"-1"<<endl;
	else
		cout<<l<<endl;
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