#include<bits/stdc++.h>
using namespace std;

int main() {
  int t,co=0;
  cin>>t;
  while(t--){
    string s,n_s="";
    cin >> s;
    for(int i=0;i<s.length();++i){
      n_s+=s[i];
      if((int)s[i]<(int)s[i+1] && i!=s.length()-1){
        n_s+=s[i];
      }
    }
    co++;
    cout<<"Case #"<<co<<": "<<n_s<<endl;
  }
}
