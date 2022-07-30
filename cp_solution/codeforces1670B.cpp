#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n,k;
	string s;
	cin>>n>>s>>k;
	char sp[k];
	for(int i=0;i<k;++i)
		cin>>sp[i];
	int next=-1,ma=0;
	for(int i=n-1;i>=0;i--){
		if(next!=-1)
			ma=max(ma,next-i);
		for(int j=0;j<k;++j){
			if(s[i]==sp[j]){
				next=i;
				break;
			}
		}
	}
	cout<<ma<<"\n";
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	cin >> t;
	while(t--)
		solve();
	
}