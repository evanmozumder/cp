#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	
		if(a<=b){
			a+=c;
		}else {
			b+=c;
		}
		if(a<=b)
			a+=d;
		else
			b+=d;
	
	if(a>b)
		cout<<"Alex"<<endl;
	else
		cout<<"Bob"<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	cin >> t;
	while(t--)
		solve();
	
}