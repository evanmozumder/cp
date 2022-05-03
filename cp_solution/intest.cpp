#include<bits/stdc++.h>
#define ll long long int

using namespace std;

/* ll binaryToDecimal(string s){
	ll ans=0;
	for(int i=0;i<s.length();++i){
		if(s[i]=='0'){
			ans=ans*2+0;
		}else{
			ans=ans*2+1;
		}
	}
	return ans;
} */


int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int n,k,c=0;
	ll t;
	cin >>n>>k;
	while(n--){
		cin>>t;
		if(t%k==0)
			c++;
	}
	cout<<c<<"\n";
}