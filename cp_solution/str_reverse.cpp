#include<bits/stdc++.h>
#define ll long long int

using namespace std;

string rev_str(string s){
	string ns="";
	for(int i=s.length()-1;i>=0;--i){
		ns+=s[i];
	}
	return ns;
}

void solve() {
	string s,r;
	cin >> s;
	r=s;
	reverse(r.begin(),r.end());
	int i=0,j=0,ans=0;
	while(i<s.length()){
		if(s[i]==r[j])
			j++;
		else
			ans++;
		i++;
	}
	cout<<ans<<endl;
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