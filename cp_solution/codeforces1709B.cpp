	#include<bits/stdc++.h>
	#define ll long long int

	using namespace std;

	void solve() {
		ll n,m,s,t,d;
		cin>>n>>m;
		ll a[n],ftl[n-1],lst_fst[n-1],biog[n][n];
		for(ll i=0;i<n;++i){
			cin>>a[i];
			if(i!=0){
				if(a[i-1]>a[i])
					ftl[i-1]=a[i-1]-a[i];
				else
					ftl[i-1]=0;
				if(a[i]>a[i-1])
					lst_fst[i-1]=a[i]-a[i-1];
				else
					lst_fst[i-1]=0;
			}
		}
		// for(ll i=0;i<m;++i){
		// 	for(ll j=0;j<2;++j){
		// 		cin>>st[i][j];
		// 	}
		// }
		// for(ll i=0;i<n;++i){
		// 	// cin>>a[i];
		// 	if(i!=0){
		// 		if(a[i-1]>a[i])
		// 			ftl[i-1]=a[i-1]-a[i];
		// 		else
		// 			ftl[i-1]=0;
		// 		if(a[i]>a[i-1])
		// 			lst_fst[i-1]=a[i]-a[i-1];
		// 		else
		// 			lst_fst[i-1]=0;
		// 	}
		// }
		// reverse(lst_fst,lst_fst+n-1);
		for(int i=0;i<n-1;++i)
			cout<<ftl[i]<<" ";
		cout<<endl;
		for(int i=0;i<n-1;++i)
			cout<<lst_fst[i]<<" ";
		cout<<endl;
		ll sum=0;
		for(ll i=0;i<n;++i){
			sum=0;
			for(ll j=0;j<n;++j){
				if(i<j){
					sum+=ftl[j-1];
					biog[i][j]=sum;
				// }else if(i>j){
				// 	biog[i][j]=ltf[j-1];
				}else {
					biog[i][j]=-1;
				}
			}
		}
		// for(int k=0;k<n-1;++k){
		// 	cout<<lst_fst[k]<<" ";
		// }
		// cout<<endl;
		for(ll i=n-1;i>=0;--i){
			sum=0;
			for(ll j=n-1;j>=0;--j){
				if(i>j){
					sum+=lst_fst[j];
					// cout<<ltf[j-1]<<endl;
					biog[i][j]=sum;
				// }else if(i>j){
				// 	biog[i][j]=ltf[j-1];
				}else {
					// biog[i][j]=-1;
				}
			}
		}
		cout<<endl;
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j)
				cout<<" ("<<i+1<<","<<j+1<<")-> "<<biog[i][j]<<" ";
			cout<<"\n";
		}
		// for(ll i=0;i<m;++i){
		// 	ll s=st[i][0],t=st[i][1];
		// 	cout<<biog[s-1][t-1]<<"\n";
		// }
		while(m--){
			cin>>s>>t;
			cout<<biog[s-1][t-1]<<"\n";
		}
		// reverse(ltf,ltf+n-1);
		// for(int i=0;i<n-1;++i)
		// 	cout<<ftl[i]<<" ";
		// cout<<endl;
		// for(int i=0;i<n-1;++i)
		// 	cout<<ltf[i]<<" ";
		// cout<<endl;
		// for(int i=0;i<n;++i){
		// 	for(int j=0;j<n;++j){

		// 	}
		// }
		// while(m--){
		// 	d=0;
		// 	cin>>s>>t;
		// 	s-=1,t-=1;
		// 	if(s<t){
		// 		while(s<t){
		// 			if(a[s]>a[s+1])
		// 				d+=a[s]-a[s+1];
		// 			s++;
		// 		}
		// 	}
		// 	else {
		// 		while(s>t){
		// 			if(a[s]>a[s-1])
		// 				d+=a[s]-a[s-1];
		// 			s--;
		// 		}
		// 	}
		// 	cout<<d<<"\n";
		// }
		// cout<<d<
	}

	int main() {
		ios_base::sync_with_stdio(false);
	  cin.tie(NULL);

		int t=1;
		// cin >> t;
		while(t--)
			solve();
		
	}