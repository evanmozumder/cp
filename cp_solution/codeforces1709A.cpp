#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int x,a,b,c;
	cin>>x;
	int ar[3];
	bool ans=true;
	for(int i=0;i<3;++i){
		cin>>ar[i];
		
	}
	int i=1;
	while(i!=3){
		if(ar[x-1]!=0){
			x=ar[x-1];
		}else{
			ans=false;
			break;
		}
		i++;
	}
	if(ans)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	// if(x==1 || x==3){
	// 	if(x==1){

	// 	}
	// }
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
	cin >> t;
	while(t--)
		solve();
	
}