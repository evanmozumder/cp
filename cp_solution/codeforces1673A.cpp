#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	string s;
	cin>>s;
	ll le=s.length(),al=0,bo=0;
	if(le%2==0){
		for(int i=0;i<le;++i)
			al+=(int)s[i]-96;
	} else if(le!=1){
		if((int)s[0]>=(int)s[le-1]){
			for(int i=0;i<le-1;++i)
				al+=(int)s[i]-96;
			bo+=(int)s[le-1]-96;
			// cout<<al<<" "<<bo<<endl;
		}else{
			for(int i=1;i<le;++i)
				al+=(int)s[i]-96;
			bo+=(int)s[0]-96;
		}
	} else{
		bo+=(int)s[0]-96;
	}
	if(al>bo)
		cout<<"Alice "<<al-bo<<"\n";
	else
		cout<<"Bob "<<bo-al<<"\n"; 
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	cin >> t;
	while(t--)
		solve();
	
}