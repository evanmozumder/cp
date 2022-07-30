	#include<bits/stdc++.h>
	#define ll long long int

	using namespace std;

	void solve() {
		ll n;
		cin>>n;
		ll x=(n/3)+1;
		// cout<<x<<endl;
		ll i=1,sum;
		bool decis=false;
		x--;
		while(!decis){
			sum=(x*3)+(i*2);
			// cout<<x<<" "<<i<<" "<<sum<<endl;
			if(x==0 || i==n){
				break;
			} else if(sum==n){
				decis=true;
			}
			i++;
			x--;
		}
		if(decis)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

	int main() {
		ios_base::sync_with_stdio(false);
	  cin.tie(NULL);

		int t=1;
		cin >> t;
		while(t--)
			solve();
		
	}