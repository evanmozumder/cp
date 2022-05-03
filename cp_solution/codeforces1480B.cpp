#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int ha,hh,n;
	cin >> ha>>hh>>n;
	bool ans=true;
	int ma[n],mh[n];
	for(int i=0;i<n;++i)
		cin >> ma[i];
	int hhr=0,mhr=0,hnh=hh,mnh;
	for(int i=0;i<n;++i){
		cin>>mh[i];
		mnh=mh[i];
		// hhr+=(ceil(mh[i]/(double)ha)*ma[i]);
		hnh-=(ceil(mh[i]/(double)ha)*ma[i]);
		mnh-=(ceil(mh[i]/(double)ha)*hh);
		if(hnh<=0 && mnh>0 && i!=n-1)
			ans=false;
	}
	// if((hh-hhr)>=0){
	// 	cout<<"YES"<<endl;
	// }else{
	// 	cout<<"NO"<<endl;
	// }
	if(ans)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int t=1;
	cin >> t;
	while(t--)
		solve();
	
}