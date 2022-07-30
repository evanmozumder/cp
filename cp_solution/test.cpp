#include<iostream>
using namespace std;

int power_calc(int base, int exponent){
	int result=1;
	while (exponent != 0) {
    result *= base;
    --exponent;
	}
	return result;
}

int main() {
	// int x=5 & 6;
	int x=6;
	x ^= 1;
	cout<<x<<endl;
}