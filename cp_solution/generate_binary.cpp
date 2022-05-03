#include<bits/stdc++.h>
#define ll long long int
using namespace std;

string dec_to_bin(int n){
	string bin="";
	bool check=true;
	while(check){
		if(n/2==0)
			check=false;
		bin+=to_string(n%2);
		n=n/2;
	}
	reverse(bin.begin(),bin.end());
	return bin;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	for(int i=0;i<n;++i)
		cout<<dec_to_bin(i)<<"\n";
}