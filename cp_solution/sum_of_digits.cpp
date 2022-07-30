#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	string n;
	cin>>n;
	ll sum=0;
	int cnt=0;
	if(n.size()==1)
		cout<<0<<endl;
	else {
		int cnt=1;
		for(int i=0;i<n.size();++i)sum+=n[i]-'0';
		int num=sum;
		// cout<<num<<endl;
		sum=0;
		while(num>=10){
			while(num!=0){
				sum+=num%10;
				num=num/10;
			}
			num=sum;
			// cout<<num<<endl;
			sum=0;
			cnt++;
		}
		
		cout<<cnt<<endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	// cin >> t;
	while(t--)
		solve();
	
}