#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int>arr(n,0);
	for(int i=0;i<n;++i)
		arr[i]=n-i;
	auto start_time=clock();
	sort(arr.begin(),arr.end());
	auto end_time=clock();
	cout<<end_time-start_time<<endl;
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