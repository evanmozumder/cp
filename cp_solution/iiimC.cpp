#include<bits/stdc++.h>
#define ll long long int

#define INF 9999999999

using namespace std;

void solve() {
	ll n;
	cin>>n;
	ll a[n],b[n],op=0,min=INF;
	for(int i=0;i<n;++i){
		cin>>a[i];
		b[i]=a[i];
		if(a[i]<min)
			min=a[i];
	}
	sort(a,a+n);
	// cout<<min<<endl;
	for(int i=0;i<n;++i){
		if(a[i]==b[i])
			op++;	
	}
	cout<<op<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	cin >> t;
	while(t--)
		solve();
	
}