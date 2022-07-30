#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n;
	cin>>n;
	ll x[n];
	for(int i=0;i<n;++i)
		cin>>x[i];
	sort(x,x+n);
	ll ev=n/2,od=n-ev,y[n];
	ll j=0,k=1;
	for(int i=0;i<n;i++){
		if(i<od and j<n){
			y[j]=x[i];
			j+=2;
		}else{
			y[k]=x[i];
			k+=2;
		}
	}
	bool decis=true;
	if(decis){
		for(int i=0;i<n;++i)
			cout<<y[i]<<" ";
		cout<<endl;
	}else
		cout<<-1<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	while(t--)
		solve();
	
}