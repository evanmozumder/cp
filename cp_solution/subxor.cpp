#include<bits/stdc++.h>
#define ll long long int

using namespace std;
ll binaryToDecimal(string n){
	ll mo=998244353;
  string num = n;
  ll dec_value = 0;
  ll l=num.length();
  // cout<<l<<endl;
  for(int i=0;i<l;++i){
  	if(num[i]=='1'){
  		dec_value=(dec_value*2)+1;
  		dec_value=dec_value%mo;
  	}
  	else{
  		dec_value=(dec_value*2)+0;
  		dec_value=dec_value%mo;
  	}
  }
  return (dec_value%mo);
}

void solve() {
	int n;
	string s,s1="1";
	cin >> n>>s;
	int count[n];
	string f="";
	for(int i=0;i<n;++i){
		if(i==0){
			if(s[i]=='1')
				count[i]=1;
			else
				count[i]=0;
		}
		else if(s[i]=='1' && i!=0){
			count[i]=count[i-1]+1+i;
		}else{
			count[i]=count[i-1];
		}
	}
	for(int i=0;i<n;++i){
		if(count[i]%2==0)
			f+='0';
		else
			f+='1';
	}
	cout<<binaryToDecimal(f)<<endl;
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