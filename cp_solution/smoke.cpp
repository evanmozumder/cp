#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n,x,y;
	cin >> n >> x >> y;
	int b,c=0;
	if(n/100<=0)
		b=1;
	else
		b=ceil(n/100.0);
	int s=(b*x)+(c*y);
	// cout << s << endl;
	int s_t=0;
	while(b--){
		s_t=(b*x)+ceil((n-(b*100))/4.0)*y;
		// cout << "temp = " << s_t << endl;
 		if(s_t<s)
			s=s_t;
	}
	// if(n/4<=0)
	// 	c=1;
	// else
	// 	c=ceil(n/4.0);
	cout << s << endl;

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