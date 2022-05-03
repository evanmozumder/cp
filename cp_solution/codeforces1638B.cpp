#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n,ev=-1,od=-1;
	bool ans=true;
	cin >> n;
	vector<int>arr(n);
	for(int i=0;i<n;++i)
		cin >> arr[i];
	for(int i=0;i<n;++i){
		if(arr[i]%2==0 && arr[i]>=ev){
			ev = arr[i];
		}else if(arr[i]%2!=0 && arr[i]>=od){
			od = arr[i];
		} else{
			ans = false;
			break;
		}
	}
	if(ans)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int t;
	cin >> t;
	while(t--)
		solve();
	
}