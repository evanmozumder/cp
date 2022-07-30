#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll power(ll base, ll exponent){
	ll result=1;
	while (exponent != 0) {
    result *= base;
    --exponent;
	}

	return result;
}

ll mostFrequent(ll arr[], ll n){
  sort(arr, arr + n);
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
	for(int i=0;i<n;i++)
		cin>>a[i];
	ll r=mostFrequent(a,n);
	cout<<n<<"\n";
	ll cp=0,swp=r,baki=n-r,same=r,op=0;
	while(baki!=0){
		if(baki<swp)
			swp=baki;
		baki-=swp;
		cout<<baki<<"\n";
		same=n-baki;
		cp++;
		op+=1+swp;
		swp*=2;
	}
	cout<<op<<"\n";
}

int main() {
	// ios_base::sync_with_stdio(false);
 //  cin.tie(NULL);

	int t=1;
	cin >> t;
	while(t--)
		solve();
	
}