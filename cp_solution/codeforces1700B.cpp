#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n;
	string num,n_num="",a_num="";
	cin>>n>>num;
	int hate=0,nn=n;
	bool l_zero=false;
	int sum,sum1;
	while(nn--){
		int c_num=(int)num[nn]-48;
		sum1=9-c_num;
		c_num+=hate;
		if(c_num>1){
			sum=11-c_num;
			hate=1;
		}
		else{
			sum=1-c_num;
			hate=0;
		}
		n_num+=(char)sum+48;
		a_num+=(char)sum1+48;
		if((int)num[nn]-48 < 1)
			l_zero=true;
	}
	reverse(n_num.begin(), n_num.end());
	reverse(a_num.begin(), a_num.end());
	if(a_num[0]=='0')
		cout<<n_num<<endl;
	else
		cout<<a_num<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	cin >> t;
	while(t--)
		solve();
}