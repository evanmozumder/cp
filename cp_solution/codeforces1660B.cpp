#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n;
	cin >> n;
	ll a[n];
	bool bel=false,a_s=true;
	ll ma=0,in;
	for(int i=0;i<n;++i){
		cin >> a[i];
		if(a[i]>ma){
			ma=a[i];
			in=i;
		}
	}
	if(n==1){
		if(a[0]<=1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}else {

		// ll fi=a[0];
		// ll ma=*max_element(a,a+n);
		// for(int i=0;i<n;++i){
		// 	if(a[i]==ma-1 && !bel)
		// 		bel=true;
		// 	if(a[i]==fi && a_s)
		// 		a_s=true;
		// 	else
		// 		a_s=false;
		// }
		// if(a_s)
		// 	cout<<"YES"<<endl;
		// else{
			
		// }
		for(int i=0;i<n;++i){
			if(a[i]==ma-1 || (a[i]==ma && in!=i)){
				bel=true;
				break;
			}
		}
		if(bel)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int t=1;
	cin >> t;
	while(t--)
		solve();
	
}