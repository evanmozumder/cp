#include<bits/stdc++.h>
#define ll long long int
#define INF 999999999999

using namespace std;

void solve() {
	ll n,m;
	cin>>n>>m;
	ll a[n],b[m],biog=INF,minA=INF,minB=INF,maxA=0,maxB=0;
	for(int i=0;i<n;++i){
		cin>>a[i];
		if(a[i]<minA)
			minA=a[i];
		if(a[i]>maxA)
			maxA=a[i];
	}
	for(int i=0;i<m;++i){
		cin>>b[i];
		if(b[i]<minB)
			minB=b[i];
		if(b[i]>maxB)
			maxB=b[i];
	}
	sort(a,a+n);
	sort(b,b+m);
	// cout<<min(abs(maxA-minB),abs(minA-maxB))<<"\n";
	if(n<m){
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				if(abs(a[i]-b[j])<biog)
					biog=abs(a[i]-b[j]);
				// else if(abs(a[i]-b[j]>biog))
				// 	break;
			}
			if(biog==0)
				break;
		}
	}else {
		for(int i=0;i<m;++i){
			for(int j=0;j<n;++j){
				if(abs(b[i]-a[j])<biog)
					biog=abs(b[i]-a[j]);
				// else if(abs(b[i]-a[j])<biog)
				// 	break;
			}
			if(biog==0)
				break;
		}
	}
	cout<<biog<<"\n";
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	// cin >> t;
	while(t--)
		solve();
	
}