#include<bits/stdc++.h>
#define ll long long int

using namespace std;

bool allSame(string s,int si){
	// int si=s.size();
	for(int i=0;i<si/2;++i){
		if(s[i]!=s[i+(si/2)])
			return false;
	}
	return true;
}

void solve() {
	string s;
	cin>>s;
	int si=s.size()-1;
	bool isTrue=true;
	while(isTrue){
		if(si%2!=0){
			si-=1;
		}
		if(allSame(s,si)){
			isTrue=false;
		}else{
			si-=2;
		}
		// cout<<si<<"\n";
	}
	cout<<si<<"\n";
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	// cin >> t;
	while(t--)
		solve();
	
}