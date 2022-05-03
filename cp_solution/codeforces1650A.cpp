#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	string s;
	char f;
	bool ans=false;
	cin >> s>>f;
	for(int i=0;i<s.length();++i){
		if(s[i]==f){
			if((i+1)%2!=0){
				ans=true;
				break;
			}
		}
	}
	if(ans)
		cout<< "YES"<<endl;
	else
		cout<< "NO"<<endl;
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