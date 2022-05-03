#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
  int t,c=0;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    ll a[n];
    for(int i=0;i<n;++i){
      cin >> a[i];
    }
    sort(a,a+n);
    ll num=1;
    for(int i=0;i<n;++i){
      if(num<a[i] && i!=0){
        num++;
      }
    }
    c++;
    cout<<"Case #"<<c<<": "<<num<<endl;
  }
}
