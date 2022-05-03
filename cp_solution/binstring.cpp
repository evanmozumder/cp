#include<bits/stdc++.h>
#define ll long long int

using namespace std;

// int binaryToDecimal(string n)
// {
//     string num = n;
//     int dec_value = 0;
 
//     // Initializing base value to 1, i.e 2^0
//     int base = 1;
 
//     int len = num.length();
//     for (int i = len - 1; i >= 0; i--) {
//         if (num[i] == '1')
//             dec_value += base;
//         base = base * 2;
//     }
 
//     return dec_value;
// }

void solve() {
	int n;
	string s;
	cin >> n>>s;
	int m=n;
	for(int i=0;i<n-1;++i){
		if(s[i]==s[i+1])
			m--;
	}
	cout<<m<<endl;
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