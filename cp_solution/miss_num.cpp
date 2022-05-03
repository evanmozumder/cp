#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll a=0,b=0,c,d,p,mi=0,di,mu;
	ll ar[4];
	int re=0,zero=0;
	for(int i=0;i<4;++i){
		cin >> ar[i];
		if(ar[i]==0)
			zero++;
		if(ar[i]<0){
			if(re!=0){
				a=-1;
				b=-1;
			}
			mi=ar[i];
			re++;
		}
	}
	// cout<<a<<" "<<b<<endl;
	sort(ar,ar+4);
	if(mi==0 && a==0 && b==0 && zero<2){
		a=(ar[1]+ar[2])%2==0?(ar[1]+ar[2])/2 : -1;
		b=(ar[1]+ar[2])%2==0?ar[2]-a : -1;
	} else if(a==0 && b==0 && zero<2){
		// cout<<"ht"<<endl;
		if((ar[0]+ar[2])%2==0){
			a=(ar[0]+ar[2])/2;
			b=ar[2]-a;
		} else{
			a=-1;
			b=-1;
		}
		// a=((ar[0]+ar[2])%2==0)?((ar[0]+ar[2])/2) : -1;
		
	} else if(a==0 && b==0 && zero<=2){
		if((ar[0]+ar[3])%2==0){
			a=(ar[0]+ar[3])/2;
			b=ar[3]-a;
		} else{
			a=-1;
			b=-1;
		}
	} else{
		a=-1;
		b=-1;
	}
	cout<<a<<" "<<b<<endl;
	// cin>>a>>b>>c>>d;
	// if(ar[0]<0||ar[1]<0||c<0||d<0){
	// 	if(a<0)
	// 		mi=a;
	// 	else if(b<0)
	// 		mi=b;
	// 	else if(c<0)
	// 		mi=c;
	// 	else if(d<0)
	// 		mi=d;
	// }
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