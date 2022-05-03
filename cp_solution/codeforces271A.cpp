#include<bits/stdc++.h>
#define ll long long int

using namespace std;



void solve() {
	int y;
	cin >> y;
	int a[4];
	bool check=true,icheck=true,ch=true;
	while(check){
		y+=1;
		int ye=y;
		for(int i=3;i>=0;--i){
			a[i]=ye%10;
			ye=ye/10;
		}
		ch=true;
		for(int i=0;i<3 && ch;++i){
			for(int j=i+1;j<4 && ch;++j){
				if(a[i]==a[j]){
					icheck=true;
					// cout<<"h"<<endl;
					ch=false;
				}else{
					icheck=false;
				}
			}
		}

		if(!icheck)
			check=false;
	}
	
	// for(int i=0;i<4;++i)
	// 	cout<<a[i]<<" ";
	cout<<y<<endl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int t=1;
	// cin >> t;
	while(t--)
		solve();
	
}