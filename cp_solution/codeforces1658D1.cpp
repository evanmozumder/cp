#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll binaryToDecimal(string s){
	ll ans=0;
	for(int i=0;i<s.length();++i){
		if(s[i]=='0'){
			ans=ans*2+0;
		}else{
			ans=ans*2+1;
		}
	}
	return ans;
}

string DecimalToBinary(ll num){
  string str;
    while(num){
    if(num & 1) // 1
      str+='1';
    else // 0
      str+='0';
    num>>=1; // Right Shift by 1 
  }   
  return str;
}

void solve() {
	ll l,r;
	cin >> l>>r;
	int n=r-l+1;
	ll a[n];
	string cb[n],s="";
	for(int i=0;i<n;++i){
		cin >> a[i];
		cb[i]=DecimalToBinary(a[i]);
	}
	ll ma=*max_element(a,a+n);
	ll mal=DecimalToBinary(ma).length();
	ll one=0,zero=0;
	for(int i=0;i<mal;++i){
		for(int j=0;j<n;++j){
			if(i<=cb[j].length()){
				if(cb[j][i]=='1')
					one++;
				else
					zero++;
			}
		}
		if(one+zero<n)
			zero=n-one;
		if(one>zero)
			s+='1';
		else
			s+='0';
		one=0,zero=0;
	}
	reverse(s.begin(), s.end());
	cout<<binaryToDecimal(s)<<endl;
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