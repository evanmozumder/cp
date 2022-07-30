#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;++i)
		cin>>a[i];
	string s="";
	for(int i=0;i<m;++i){
		s+='B';
	}
	// cout<<s<<endl;
	for(int i=0;i<n;++i){
		int mi=min((a[i]-1),m+1-a[i]-1);
		int ma=max((a[i]-1),m+1-a[i]-1);
		if(s[mi]!='A')
			s[mi]='A';
		else{
			s[ma]='A';
		}
		// if(s[a[i]-1]!='A')
		// 	s[a[i]-1]='A';
		// else if(s[m+1-a[i]-1]!='A'){
		// 	s[m+1-a[i]-1]='A';
		// }
	}
	cout<<s<<"\n";
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	cin >> t;
	while(t--)
		solve();
	
}