#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n;
	string s;
	cin >> n>>s;
	int zero=0,one=0,Ozero=0,Ezero=0,Oone=0,Eone=0;
	int count=0,repeat=0,z_max=0,o_max=0,z_r=0,o_r=0;
	for(int i=0;i<n;++i){
		if(s[i]=='0'){
			zero++;
			z_r++;
			o_r=0;
			// if(i!=0 && s[i-1]=='0'){
			// 	z_r++;
			// }
		}
		else{
			one++;
			o_r++;
			z_r=0;
		}
		if(z_r>z_max)
			z_max=z_r;
		if(o_r>o_max)
			o_max=o_r;
		// if(s[i]=='0' && s[i+1]=='1'){
		// 	count++;
		// } else if(){

		// }
		// if(i%2==0){
		// 	if(s[i]=='0')
		// 		Ezero++;
		// 	else
		// 		Eone++;
		// }
		// else{
		// 	if(s[i]=='0')
		// 		Ozero++;
		// 	else
		// 		Oone++;
		// }
	}
	if(n==2 && s[0]=='0' && s[1]=='1')
		cout<<1<<endl;
	else if(n==2 && s[0]=='1' && s[0]=='0')
		cout<<0<<endl;
	else {
		// cout<<o_r<<" "<<z_r<<endl;
		if(zero<one){
			if(zero==z_max && zero!=0 && z_max>1)
				cout<<zero-1<<endl;
			else
				cout<<zero<<endl;
		} else if(one<zero){
			if(one==o_max && one!=0 && o_max>1)
				cout<<one-1<<endl;
			else
				cout<<one<<endl;
		} else{
			int m_r=max(z_max,o_max);
			// cout<<m_r<<endl;
			if(zero==m_r || one==m_r)
				cout<<zero-1<<endl;
			else
				cout<<zero<<endl;
		}
	}
	
	// cout<<z_max<<" "<<o_max<<endl;
	// zero=min(Ozero,Oone);
	// one=min(Oone,Eone);
	// cout<<min(max(Ozero,Oone),max(Ezero,Eone))<<endl;
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