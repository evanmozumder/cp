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

	ll mostFrequent(ll arr[], ll n){
	  // Sort the array
	  sort(arr, arr + n);

	  // Find the max frequency using linear traversal
	  ll max_count = 1, res = arr[0], curr_count = 1;
	  if(arr[0]==arr[n-1])
			max_count=0;
		else {
		  for (int i = 1; i < n; i++) {
		    if (arr[i] == arr[i - 1])
		      curr_count++;
		    else
		      curr_count = 1;
		   
		    if (curr_count > max_count) {
		      max_count = curr_count;
		      res = arr[i - 1];
		    }
		  }
		} 

	  return max_count;
	}

	void solve() {
		ll n;
		cin >> n;
		ll a[n];
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		ll r=mostFrequent(a,n);
		// cout<<r<<"\n";
		bool check=true;
		ll cnt=1,o=0,max_swap,same=0,max_same;
		while(check && n!=1 & r!=0){
			max_swap=cnt*r;
			max_same=2*max_swap;
			if(same==0)
				same=r;
			if(max_same<=n){
				o+=(1+max_swap);
				same=max_same;
			// }else if(max_same==n){
			// 	o+=1+max_swap;
			// 	same=max_same;
			// 	// check=false;
			}else {
				o+=(1+n-same);
				same=n;
				// check=false;
			}
			if(same==n)
				check=false;
			cnt++;
			// cout<<o<<"\n";
		}
		cout<<o<<"\n";
	}

	int main() {
		ios_base::sync_with_stdio(false);
	  cin.tie(NULL);

		int t=1;
		cin >> t;
		while(t--)
			solve();
		
	}