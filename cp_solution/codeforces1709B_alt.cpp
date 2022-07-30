#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n,m,sj,tj;
	cin>>n>>m;
	ll a[n],p[n],s[n],sum=0;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	p[0]=0;
	for(int i=1;i<n;++i){
		if(a[i-1]>a[i]){
			p[i]=a[i-1]-a[i]+sum;
			sum=p[i];
		}
		else
			p[i]=sum;
	}
	s[n-1]=0,sum=0;
	for(int i=n-2;i>=0;--i){
		if(a[i+1]>a[i]){
			s[i]=a[i+1]-a[i]+sum;
			sum=s[i];
		}else{
			s[i]=sum;
		}
	}
	// for(int i=0;i<n;++i)
	// 	cout<<p[i]<<" ";
	// cout<<endl;
	// for(int i=0;i<n;++i)
	// 	cout<<s[i]<<" ";
	// cout<<endl;
	// cout<<endl;
	while(m--){
		cin>>sj>>tj;
		if(sj<tj){
			cout<<p[tj-1]-p[sj-1]<<"\n";
		}else{
			cout<<s[tj-1]-s[sj-1]<<"\n";
		}
	}
	
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	// cin >> t;
	while(t--)
		solve();
	
}