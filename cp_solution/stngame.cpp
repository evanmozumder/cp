#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n;
	cin >> n;
	int ar[n];
	int br[n];
	string a,b;
	
	cin >> a >> b;
	for(int i=0;i<n;++i){
		ar[i]=(int)a[i];
		br[i]=(int)b[i];
		// cout << ar[i] << " " << br[i] << endl;
	}
	sort(ar,ar+n);
	sort(br, br + n, greater<int>());
	// for(int i=0;i<n;++i)
	// 	cout << char(ar[i]);
	// cout << endl;
	n+=n;
	char s[n];
	// cout <<char(ar[2]) << endl;
	int j=0,k=0;
	for(int i=0;i<n;++i){
		
		if(i%2==0){
			// s[j]=char(ar[i]);
			cout << char(ar[j]);
			j++;
		}else{
			// s[i]=char(br[i]);
			cout << char(br[k]);
			k++;
		}
	}
	cout << endl;
	// for(int i=0;i<n;++i)
	// 	cout << s[i];
	// cout << endl;
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