#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	string s;
	cin >> s;
	bool ans=false;
	vector<int>d(3);
	vector<int>k(3);
	for(int i=0;i<6;++i){
		if((int)s[i]<97){
			// d.push_back((int)s[i])
			for(int j=0;j<i;++j){

				if((int)s[j]==(int)s[i]+32){
					// cout << "Hello" << endl;
					ans=true;
					break;
				} else{
					ans=false;
				}
			}
			// cout << ans << endl;
			if(!ans){
				cout << "NO" << endl;
				return;
			}
		}
			// k.push_back((int)s[i])

	
	// for(int i=0;i<6;++i){
	// 	if((int)s[i]<97)
	// }
	
	}
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