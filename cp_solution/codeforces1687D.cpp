#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int isCute(int n){
  int l,r,fx,gx;
  l=(int)sqrt(n);
	r=(int)sqrt(n)+1;
	fx=r*r,gx=l*l;
	if(n<((fx+gx)/2.0))
    return 0;
  else
    return fx-n;
}

int newRange(int n,int* l, int* r){
  int fx,gx;
  *l=(int)sqrt(n);
	*r=(int)sqrt(n)+1;
	fx=(*r)*(*r),gx=(*l)*(*l);
	if(n<((fx+gx)/2.0))
    return *r;
  else
    return fx-n;
}

void solve() {
	int n,l,r,fx,gx,k;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i)
    cin>>a[i];
  sort(a,a+n);
	bool allCute=false;
  k=isCute(a[n-1]);
  if(n!=1){
    while(!allCute){
      for(int i=0;i<n-1;++i){
        int c=isCute(a[i]+k);
        if(c!=0)break;
        if(c==0 && i==n-2)allCute=true;
      }
      if(allCute)break;
      k++;
      k+=isCute(a[n-1]+k);
  //    if(c>0)
  //      k=c;
  //    cout<<k<<"\n";
  //    cout<<"\n";
  //    break;
    }
  }
	cout<<k<<"\n";
//	l=(int)sqrt(n);
//	r=(int)sqrt(n)+1;
//	fx=r*r,gx=l*l;
//	if(n>=((fx+gx)/2.0)){
//    l++,r++;
//	}
//	cout<<n<<"   "<<l*l<<"  "<<r*r<<"\n";
}

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

	int t=1;
//	cin >> t;
	while(t--)
		solve();

}
