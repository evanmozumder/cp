#include<bits/stdc++.h>
#define ll long long int

using namespace std;

// void solve() {
	
// }

int gcd_calc(int a, int b){
	while(a%b!=0 or b%a!=0){
		if(a<b){
			int temp=a;
			a=b%a;
			b=temp;
		}else {
			int temp=b;
			b=a%b;
			a=temp;
		}
	}
	if(a<b)
		return a;
	else
		return b;
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	// cin >> t;
	// while(t--)
	// 	solve();
	int n,w_g;
	cin>>n;
	int a[n];
	bool p_co=true;
	int n_e=0;
	for(int i=0;i<n;++i){
		cin>>a[i];
		if(a[i]%2==0)
			n_e++;
		if(i==0)
			w_g=a[i];
		else{
			w_g=__gcd(w_g,a[i]);
		}
	}
	if(w_g>1)
		cout<<"not coprime"<<"\n";
	else if(n_e>=2){
		p_co=false;
		cout<<"setwise coprime"<<"\n";
	}
	else {
		// for(int i=0;i<n-1;++i){
		// 	for(int j=i+1;j<n;++j){
		// 		// if(__gcd(a[i],a[j])!=1){
		// 		// 	p_co=false;
		// 		// 	break;
		// 		// }
		// 		if(a[i]<a[j] and a[j]%a[i]==0){
		// 			p_co=false;
		// 			break;
		// 		}else if(a[i]>=a[j] and a[i]%a[j]==0){
		// 			p_co=false;
		// 			break;
		// 		}
		// 	}
		// 	if(!p_co)
		// 		break;
		// }
		cout<<"pairwise coprime"<<"\n";
	}
	// if(p_co)
		
	// else if(w_g==1)
	// 	cout<<"setwise coprime"<<"\n";
	// else
	// 	cout<<"not coprime"<<"\n";	
}