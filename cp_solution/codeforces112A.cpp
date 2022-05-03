#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	string s1,s2;
	cin >> s1>>s2;
	int ans=0;
	for(int i=0;i<s1.length();++i){
		if((int)s1[i]<97)
			s1[i]=(int)s1[i]+32;
		if((int)s2[i]<97)
			s2[i]=(int)s2[i]+32;
		if((int)s1[i]!=(int)s2[i]){
			if((int)s1[i]>(int)s2[i])
				ans=1;
			else if((int)s2[i]>(int)s1[i])
				ans=-1;
			break;
		}
	}
	cout<<ans<<endl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int t=1;
	// cin >> t;
	while(t--)
		solve();
	
}