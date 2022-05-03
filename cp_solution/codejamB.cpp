#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int t,co=0;
    ll s;
    cin >>t;
    while(t--){
        s=0;
        ll a1[4],a2[4],a3[4],fa[4];
        for(int i=0;i<4;++i)
            cin>>a1[i];
        for(int i=0;i<4;++i)
            cin>>a2[i];
        for(int i=0;i<4;++i)
            cin>>a3[i];
        ll fi=0,in;
        for(int i=0;i<4;++i){
            fa[i]=min(a1[i],min(a2[i],a3[i]));
            if(fa[i]>fi){
              fi=fa[i];
              in=i;
            }
            s+=fa[i];
        }
        co++;
        cout<<"Case #"<<co<<": ";
        //cout<<s<<endl;
        if(s==1000000){
          for(int i=0;i<4;++i)
            cout<<fa[i]<<" ";
          cout<<endl;
        }else if(s>1000000){
          ll extra=s-1000000;
          for(int i=0;i<4;++i){
            if(fa[i]<=extra && s!=1000000){
              s-=fa[i];
              extra-=fa[i];
              fa[i]=0;
            }else if(fa[i]>extra && s!=1000000){
              s-=extra;
              fa[i]-=extra;
              extra=0;
            }
            //if(i==in)
              //fa[i]-=s-1000000;
            cout<<fa[i]<<" ";
          }
          cout<<endl;
        }else{
            cout<<"IMPOSSIBLE"<<endl;
        }
    }
}
