#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n,d1,d2,c=0;
	cin>>n;
	bool dec=false;
	while(n--){
		cin>>d1>>d2;
		if(d1==d2)
			c++;
		else
			c=0;
		if(c==3)
			dec=true;
	}
	if(dec)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	// cin >> t;
	while(t--)
		solve();
	
}