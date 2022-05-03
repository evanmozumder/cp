#include<bits/stdc++.h>
#define ll long long int

using namespace std;

bool isPerfectSquare(long double x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {
 
        ll sr = sqrt(x);
         
        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}

void solve() {
	ll s,p,n,m;
	cin >> s >> p;
	if(isPerfectSquare((s*s)-4*p)){
		// cout << ((s+(int)sqrt((s*s)-4*p))%2) << endl;
		n=(s+sqrt(s*s-4*p))/2;
		m=s-n;
		if(n>0 && m>0)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
		// if(((s+(int)sqrt((s*s)-4*p))%2)==0)
		// 	cout << "Yes" << endl;
	}
	else
		cout << "No" << endl;
	// cout << sqrt(1-2) << endl;
	// if(s)
	// cout << n << " " << m << endl;
	
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	// int t=1;
	// cin >> t;
	// while(t--)
		solve();
	
}