#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	ll n,k,ki;
	cin >>n>>k;
	ki=k;
	vector<int>nums;
	for(int i=1;i<=n;++i)
		nums.push_back(i);
	// for(int i=0;i<n;++i){
	// 	cout << nums[i] << " ";
	// }
	// cout << endl;
	if(k>n || k==0)
		cout << -1 << endl;
	else if(k==n-1){
		swap(nums[0],nums[1]);
		for(int i=0;i<n;++i){
			cout << nums[i] << " ";
		}
		cout << endl;
	}
	else {
		for(int i=0;i<n;++i){
			if(k>0){
				cout << i+1 << " ";
				k--;
			} else if(i!=n-1){
				cout << i+2 << " ";
			} else{
				cout << ki+1;
			}
		}
		cout << endl;
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