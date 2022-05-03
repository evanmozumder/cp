#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n;
	cin >> n;
	bool check=true,h=false;
	vector<int>nums;
	string s="";
	int sum=0;
	int i=0;
	if(n<=2)
		cout<<n<<endl;
	else{

		while(check){
			// cout<<"h"<<endl;
			if(i%2==0){
				s+="2";
				nums.push_back(2);
				sum+=2;
			}else{
				s+="1";
				nums.push_back(1);
				sum+=1;
			}
			if(sum>n){
				sum-=2;
				h=true;
			}else if(sum==n){
				check=false;
			}
			i++;
		}
		// cout<<s<<endl;
		if(h){
			for(int j=1;j<nums.size();++j){
				cout<<nums[j];
			}
			cout<<endl;
		}else{
			for(int j=0;j<nums.size();++j){
				cout<<nums[j];
			}
			cout<<endl;
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