#include<bits/stdc++.h>
#define ll long long int
#define vc vector

using namespace std;

int power(int b, int p){
	int mult=1;
	while(p--){
		mult *= 10;
	}
	return mult;
}

void solve() {
	int n,k=0;
	cin >> n;
	int d = log10(n)+1;
	int p=0;
	vc<int>digits(d);
	string s="";
	while(d--){
		digits[d] = n%10;
		if(digits[d]!=0){
			k++;
			s += to_string(digits[d]*(power(10,p)));
			s += " ";
		}
		p++;
		n=n/10;	
	}
	cout << k << endl;
	cout << s << endl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int t;
	cin >> t;
	while(t--)solve();
}