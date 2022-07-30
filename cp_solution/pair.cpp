#include<bits/stdc++.h>
using namespace std;

int main() {
	pair<int,string>p;
	// p=make_pair(2,"Evan");
	p={3,"Evan"};
	cout<<p.first<<" "<<p.second<<endl;
	pair<int,int>p_array[5];
	for(int i=0;i<5;++i){
		p_array[i]={((i*i)+i*3),((i*i)+i*5)};
	}
	for(int i=0;i<5;++i){
		cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
	}
} 