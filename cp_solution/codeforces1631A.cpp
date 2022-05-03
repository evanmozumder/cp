#include<bits/stdc++.h>
#define ll long long int

using namespace std;

// int max_num(int arr[n]){

// }

void solve() {
	int n;
	cin >> n;
	int a[n],b[n];
	ll m1=0,m2=0,i1,i2,m3=0;
	for(int i=0;i<n;++i){
		cin >> a[i];
		if(a[i]>m1){
			m1=a[i];
			i1=i;
		}
	}
	for(int i=0;i<n;++i){
		cin >> b[i];
		if(b[i]>m2){
			m2=b[i];
			i2=i;
		}
	}
	// cout << "m1 = " << m1 << " m2 = " << m2 << endl;
	if(m1==m2 && i1==i2)
		cout << m1*m2 << endl;
	else{
		if(m1>m2){
			// working on 'b' array
			m2=0;
			for(int i=0;i<n;++i){
				if(a[i]<b[i]){
					int temp=b[i];
					b[i]=a[i];
					a[i]=temp;
				}
				if(b[i]>m2)
					m2=b[i];
			}
			// cout << "m1 = " << m1 << " m2 = " << m2 << endl;
			cout << m1*m2 << endl;
		}else{
			// working on 'a' array
			m1=0;
			for(int i=0;i<n;++i){
				if(b[i]<a[i]){
					int temp=a[i];
					a[i]=b[i];
					b[i]=temp;
				}
				if(a[i]>m1)
					m1=a[i];
			}
			cout << m1*m2 << endl;
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