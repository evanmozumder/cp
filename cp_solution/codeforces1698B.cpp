#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
  ll n,k,o=0;
  cin>>n>>k;
  ll a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  for(int i=0;i<n;i++){
    if(i!=0 and i!=n-1){
    	if(a[i]>a[i-1]+a[i+1] or k==1){
      	o++;
      	i++;
    	}
  	}
  }
  cout<<o<<endl;
}

int main() {
  int t;
  cin >> t;
  while(t--)
    solve();
  return 0;
}