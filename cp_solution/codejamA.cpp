#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve(int t) {
	int r,c;
	cin >> r>>c;
	int plus=c+1,minus=c,dot=r,ger=r+1;
	c=plus+minus;
	r=dot+ger;
	cout<<"Case #"<<t<<":"<<endl;
	for(int i=0;i<r;++i){
	    for(int j=0;j<c;++j){
	        if((i==0&&j==0)||(i==0&&j==1)||(i==1&&j==0)||(i==1&&j==1)){
	            cout<<".";
	        }else if(i%2==0&&j%2==0){
	            cout<<"+";
	        }else if(i%2==0&&j%2!=0){
	            cout<<"-";
	        }else if(i%2!=0&&j%2==0){
	            cout<<"|";
	        }else if(i%2!=0&&j%2!=0){
	            cout<<".";
	        }
	    }
	    cout<<endl;
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int t=1,c=0;
	cin >> t;
	while(t--){
	    c++;
	    solve(c);
	}
		
	
}