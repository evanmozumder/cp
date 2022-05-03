#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int num_bit(int n){
  int binaryNum[32];
  int i = 0;
  while (n > 0) {
    binaryNum[i] = n % 2;
    n = n / 2;
    i++;
  }
  int num_of_bit=0;
  for (int j = i - 1; j >= 0; j--){
    num_of_bit++;
  }

  return num_of_bit;
}

void solve() {
	int n;
	cin >> n;
	int max_bit = num_bit(n-1);
	int k=n-1;
	while(num_bit(k)==max_bit){
		cout << k << " ";
		k--;
	}
	int j=0;
	while(j<=k){
		cout << j << " ";
		j++;
	}
	cout << endl;
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
	
	return 0;
}