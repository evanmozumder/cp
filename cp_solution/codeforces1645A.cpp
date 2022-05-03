#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
  int n,f,fc=0,s,sc=0,in1,in2,in;
  cin >> n;
  bool ans=true;
  int a[n];
  for(int i=0;i<n;++i){
    cin >> a[i];
    // if(i==0){
    //   f=a[i];
    //   fc++;
    //   in1=i;
    // }
    // else{
    //   if(a[i]!=f && ans){
    //     s=a[i];
    //     sc++;
    //     in2=i;
    //     if(sc>1){
    //       in=in1;
    //       ans=false;
    //     }
    //     // if(a[i]==a[i+1]){
    //     //   cout << i-1 << endl;
    //     //   ans=false;
    //     // } else if(a[i]!=a[i+1]){
    //     //   cout << i+1 << endl;
    //     //   ans=false;
    //     // }
    //   } else if(ans) {
    //     fc++;
    //     if(fc>1 && s>=1){
    //       in=in2;
    //       ans=false;
    //     }
    //   }
    //   // if(fc>1)

    // }
  }
  // cout<<in+1<<endl;

  for(int i=1;i<n-1;++i){
    if(a[i]!=a[i-1] && a[i]!=a[i+1]){
      cout<<i+1<<endl;
      break;
    } else if(a[i]!=a[i-1]&&a[i]==a[i+1]){
      cout<<i<<endl;
      break;
    } else if(a[i]==a[i-1]&&a[i]!=a[i+1]){
      cout<<i+2<<endl;
      break;
    }
  }
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