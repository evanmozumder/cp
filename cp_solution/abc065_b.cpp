#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
		b[i]=0;
	}
	bool check=true;
	int in=1,t=0,tin;
	while(check){
		tin=a[--in];
		// cout<<"tin = "<<tin<<"\n";
		b[in]++;
		if(b[in]>1){
			check=false;
			t=-1;
		}else if(in==1){
			check=false;
		}
		else{
			t++;
		}
		in=tin;
		// cout<<"in = "<<in<<"\n";
		// if(in==1 || tin==st)
		// 	check=false;
		// else
		// 	t++;
	}
	cout<<t<<"\n";
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	// cin >> t;
	while(t--)
		solve();
	
}