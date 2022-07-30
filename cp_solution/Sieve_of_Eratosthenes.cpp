#include<bits/stdc++.h>
using namespace std;
#define sz 99999999

vector<int>prime_factors[sz];

bool is_prime(int n){
	if(n<=1)
		return false;
	if(n<=3)
		return true;
	if(n%2==0 || n%3==0) {
		return false;
	}
	for(int i=5;i*i<=n;i+=6)
		if(n%i==0 || n%(i+2)==0)
			return false;
	return true;
}

int sieve(int n){
	vector<bool>isPrime(n+1,true);
	for(int i=2;i<=n;++i){
		if(isPrime[i]){
			if(prime_factors[i].empty())
				prime_factors[i][0]=0;
			else{
				prime_factors[i][0]++;
			}
			for(int j=i*i;j<=n;j+=i){
				isPrime[j]=false;
			}
		}
	}
}

void solve(){
	int n,w_g=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
		sieve(a[i]);
		w_g=__gcd(w_g,a[i]);
	}
	for(int i=0;i<10;++i){
		cout<<prime_factors[i][0]<<"\n";
	}
}

int main() {
	int t=1;
	// cin>>t;
	while(t--)
		solve();
}