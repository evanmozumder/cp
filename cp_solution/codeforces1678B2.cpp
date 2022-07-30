#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n;
	string s;
	cin>>n>>s;
	// int l=1,o=0;char ch;
	// for(int i=0;i<n-1;++i){
	// 	if(s[i]==s[i+1])
	// 		l++;
	// 	else{
	// 		if(l%2!=0){
	// 			s[i]=(s[i]=='1')?'0':'1';
	// 			o++;
	// 			i--;
	// 		}
	// 		l=1;
	// 	}
	// }
	// cout<<o<<endl;
	int o=0,seg=0;
	char head='.';
	for(int i=0;i<n;i+=2){
		if(s[i]!=s[i+1])
			o++;
		else if(s[i]!=head){
			seg++;
			head=s[i];
		}
	}
	if(seg==0)
		seg++;
	cout<<o<<" "<<seg<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	cin >> t;
	while(t--)
		solve();
	
}