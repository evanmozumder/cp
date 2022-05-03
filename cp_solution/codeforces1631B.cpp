#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;++i)
		cin >> a[i];
	// int o=0,x=0,s=0;
	// for(int i=n-1;i>0;i--){
	// 	s++;
	// 	if(a[i]!=a[i-1]){
	// 		a[i-1]=a[i];
	// 		// s++;
			
	// 		if(x==0){
	// 			o++;
	// 			x=s;
	// 		}
	// 		x--;
	// 		// cout << "s= "<<s<<" x= "<<x<<endl;
	// 		// else {
	// 		// 	x--;
	// 		// }
	// 		// i = i-x+1;
	// 	} else {
	// 		// s++;
	// 	}
	// }
	// cout << o << endl;

	int s=0,o=0,x=0;
	for(int i=n-1;i>=0;--i){
		s++;
		if(a[i]!=a[n-1]){
			if(x==0){
				o++;
				x=s-2;
			}else{
				x--;
			}
		} else{
			if(x!=0)
				x--;
		}
	}
	cout << o << endl;
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