#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n,zero=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
		if(a[i]==0)
			zero++;
	}
	int d=0;
	bool dis=true;
	for(int i=0;i<n;++i){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				dis=false;
				break;
			}
		}
		if(dis)
			d++;
		dis=true;
	}
	if(zero==n)
		cout<<0<<endl;
	else if(zero==0 and d==n)
		cout<<n+1<<endl;
	else if(d<n and zero==0)
		cout<<n<<endl;
	else{
		cout<<n-zero<<endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	cin >> t;
	while(t--)
		solve();
	
}