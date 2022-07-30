#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int a,b,c;
	char s,q;
	cin>>a>>s>>b>>q>>c;
	if((int)s==43){
		if(a+b==c)
			cout<<"Yes"<<endl;
		else
			cout<<a+b<<endl;
	}
	else if((int)s==45){
		if(a-b==c)
			cout<<"Yes"<<endl;
		else
			cout<<a-b<<endl;
	}
	else if((int)s==42){
		if(a*b==c)
			cout<<"Yes"<<endl;
		else
			cout<<a*b<<endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	// cin >> t;
	while(t--)
		solve();
	
}