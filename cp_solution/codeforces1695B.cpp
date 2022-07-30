#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n;
	cin>>n;
	ll a[n],min,in;
	// bool all_equal=true;
	for(int i=0;i<n;++i){
		cin>>a[i];
		if(i==0)
			min=a[i];
		else if(a[i]<min){
			min=a[i];
			in=i;
		}
		// if(i!=0 and a[i]!=a[i-1] and all_equal)
		// 	all_equal=false;
	}
	if(n%2==0){
		if(in%2==0){
			cout<<"Joe"<<endl;
		}
		else{
			cout<<"Mike"<<endl;
		}
	}
	else{
		cout<<"Mike"<<endl;
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