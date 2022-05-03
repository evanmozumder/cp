#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n,m;
	cin >> n;
	ll a[n];
	for(int i=0;i<n;++i){
		cin >> a[i];
	}
	m=ceil((2*n)/3.0);
	for(int i=0;i<n;i+=3){
		if(i+1==n-1){
			if(__gcd(a[i],a[i+1])==1){
				a[i]=a[i+1]*3;
			}
		} else{
				if(__gcd(a[i+1],a[i])==1 || __gcd(a[i+1],a[i+2])==1){
					a[i]=a[i+1]*3;
					a[i+2]=a[i+1]*3;
				}
		}
	}
	for(int i=0;i<n;++i)
		cout<<a[i]<< " ";
	cout<<endl;
}

int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);
// #endif

	int t=1;
	cin >> t;
	while(t--)
		solve();
	
}