#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool both_odd(ll l, ll r){
	if(l%2!=0 && r%2!=0)
		return true;
	else
		return false;
}

int main() {
	ll t,l,r,k;
	cin >>t;
	while(t--){
		cin >>l>>r>>k;
		if(both_odd(l,r)){
			if(l==r && l!=1)
				cout<<"YES"<<endl;
			else if(k>((r-l+1)/2))
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		} else{
			if(k>=((r-l+1)/2))
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}

	return 0;
}