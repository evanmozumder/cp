#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve() {
	int n,item;
	cin >> n;
	item=n;
	int arr[n],che[n];
	for(int i=0;i<n;++i){
		cin >> arr[i];
		che[i]=0;
	}
	for(int i=0;i<n-1;++i){
		for(int j=i+1;j<n;++j){
			if(arr[i]>arr[j] && che[j]==0){
				item--;
				che[j]=1;
			}
		}
	}
	cout << item << endl;
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
	
	return 0;
}