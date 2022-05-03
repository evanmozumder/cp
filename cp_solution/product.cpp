#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int a,b,c;
	cin >> b>>c;
	bool ans =true;
	// a=(c/(double)b)*2;

	// cout << a << endl;
	// int mult=1;
	// while(ans){
	// 	if((c*mult)%b==0){
	// 		ans=false;
	// 		a=(c*mult)/b;
	// 		cout << a << endl;
	// 	}
	// 	mult++;
	// }
	if(c%b==0)
		cout<<c/b<<endl;
	// else if(b<c){
	// 	cout<<(c*2)/b<< endl;
	 else{
	 	cout<< c/(__gcd(b,c))<<endl;
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