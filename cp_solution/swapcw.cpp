#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n;
	string s;
	
	cin>>n>>s;
	int a[n];
	bool check=true;
	for(int i=0;i<n;++i){
		if((int)s[i]>(int)s[n-1-i] && i<n/2){
			char temp=s[i];
			s[i]=s[n-1-i];
			s[n-1-i]=temp;
		}
		a[i]=(int)s[i];
		// cout<<a[i]<<endl;
		if(i>0 && a[i]<a[i-1]){
			check=false;
			break;
		}
	}
	if(check)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
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