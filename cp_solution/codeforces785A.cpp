#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n,sum=0;
	string s;
	cin >> n;
	while(n--){
		cin >> s;
		if(s=="Tetrahedron")
			sum += 4;
		else if(s=="Cube")
			sum += 6;
		else if(s=="Octahedron")
			sum += 8;
		else if(s=="Dodecahedron")
			sum += 12;
		else
			sum += 20;
			
	}
	cout << sum << endl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	
	// int t;
	// cin >> t;
	// while(t--)
		solve();
	
	return 0;
}