#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n,start_in,last_in,num=-1,times=0;
	cin >> n;
	vector<int>nums(n);
	for(int i=0;i<n;++i)
		cin >> nums[i];
	for(int i=0;i<n;++i){
		if(nums[i]!=i+1 && times==0){
			start_in=i;
			num=i+1;
			times++;
		} else if(nums[i]==num){
			last_in=i;
			break;
		}
	}
	if(num!=-1){
		reverse(nums.begin()+start_in,nums.begin()+last_in+1);
		for(int i=0;i<n;++i)
			cout << nums[i] << " ";
		cout << endl;
	} else {
		for(int i=0;i<n;++i)
			cout << nums[i] << " ";
		cout << endl;
	}
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