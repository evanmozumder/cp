#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n;
	cin >> n;
	ll a[n],b[n];
	for(int i=0;i<n;++i)
		cin >> a[i];
	for(int i=0;i<n;++i)	
		cin >> b[i];
	// first possibility (2 edges)
	ll s1=abs(a[0]-b[0])+abs(a[n-1]-b[n-1]);
	ll s2=abs(a[0]-b[n-1])+abs(a[n-1]-b[0]);
	// 2 edges final
	s1=min(s1,s2);

	// second possibility (3 edges)
	// shape 1
	ll s3=abs(a[0]-b[0]);
	ll s4=abs(a[n-1]-b[1]);
	ll s5=abs(b[n-1]-a[1]);
	for(int i=0;i<n;++i){
		if(abs(a[n-1]-b[i])<s4)
			s4=abs(a[n-1]-b[i]);
		if(abs(b[n-1]-a[i])<s5)
			s5=abs(a[n-1]-b[i]);
	}
	// shape 1 final
	s2=s3+s4+s5;
	// shape 2
	s3=abs(a[n-1]-b[n-1]);
	s4=abs(a[0]-b[1]);
	s5=abs(b[0]-a[1]);
	for(int i=0;i<n;++i){
		if(abs(a[0]-b[i])<s4)
			s4=abs(a[0]-b[i]);
		if(abs(b[0]-a[i])<s5)
			s5=abs(a[0]-b[i]);
	}
	// shape 2 final
	s3=s3+s4+s5;

	// shape 3
	s4=abs(a[0]-b[n-1]);
	s5=abs(b[0]-a[1]);
	ll s6=abs(a[n-1]-b[1]);
	for(int i=0;i<n;++i){
		if(abs(b[0]-a[i])<s5)
			s5=abs(b[0]-a[i]);
		if(abs(a[n-1]-b[i])<s6)
			s6=abs(a[n-1]-b[i]);
	}
	// shape 3 final
	s4=s4+s5+s6;


	// shape 4
	s5=abs(b[0]-a[n-1]);
	s6=abs(a[0]-b[1]);
	ll s7=abs(b[n-1]-a[1]);
	for(int i=0;i<n;++i){
		if(abs(a[0]-b[i])<s6)
			s6=abs(a[0]-b[i]);
		if(abs(b[n-1]-a[i])<s7)
			s7=abs(b[n-1]-a[i]);
	}
	// shape 4 final
	s5=s5+s6+s7;

	// 3 edges final
	s2=min(min(min(s2,s3),s4),s5);

	// second way
	// ll s2=0,s3=0,s4=0,s;
	// if(n==3){
	// 	for(int i=0;i<n;++i){
	// 		if(i==0){
	// 			s2+=abs(a[i]-b[i+1]);
	// 		}else if(i==n-1){
	// 			s2+=abs(a[i]-b[i-1]);
	// 		} else{
	// 			s2+=(abs(a[i]-b[i-1])+abs(a[i]-b[i+1]));
	// 		}
	// 	}
	// 	s=s2;
	// } else {
	// 	for(int i=0;i<n;i+=2){
	// 		if(i==0){
	// 			s3+=abs(a[i]-b[i+1]);
	// 			s4+=abs(b[i]-a[i+1]);
	// 		}else if(i==n-1){
	// 			s3+=abs(a[i]-b[i-1]);
	// 			s4+=abs(b[i]-a[i-1]);
	// 		} else{
	// 			s3+=(abs(a[i]-b[i-1])+abs(a[i]-b[i+1]));
	// 			s4+=(abs(b[i]-a[i-1])+abs(b[i]-a[i+1]));
	// 		}
	// 	}
	// 	cout<<"s3 = "<<s3<<" s4 = "<<s4<<" s1 = "<<s1<<endl;
	// 	s=min(s3,s4);
	// }
	
	// // third way
	
	// // cout<<"s1 = "<<s1<<" s2 = "<<s2<<endl;
	// // cout<<s<<endl;
	// cout<<min(s,s1)<<endl;	

	ll p=0;
	p=abs(a[0]-b[0]);
	s3=abs(a[n-1]-b[0]);
	s4=abs(b[0]-a[0]);
	s5=abs(b[n-1]-a[0]);
	// third possibility (4 edges)
	for(int i=0;i<n;++i){
		if(abs(a[0]-b[i])<p){
			p=abs(a[0]-b[i]);
		}
		if(abs(a[n-1]-b[i])<s3)
			s3=abs(a[n-1]-b[i]);
		if(abs(b[0]-a[i])<s4)
			s4=abs(b[0]-a[i]);
		if(abs(b[n-1]-a[i])<s5)
			s5=abs(b[n-1]-a[i]);
	}
	// 4 edges final
	ll s=p+s3+s4+s5;
	
	cout<<min(min(s1,s2),s)<<endl;
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