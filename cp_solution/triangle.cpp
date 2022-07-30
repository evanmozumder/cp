#include<bits/stdc++.h>
using namespace std;

double tri_area(double a1,double a2,double b1,double b2,double c1,double c2){
	double area=0;
	area=1/2.0*(abs((a1*b2)-(a2*b1))+abs((b1*c2)-(b2*c1))+abs((c1*a2)-(c2*a1)));
	return area;
}	

// double ins_tri()

int main() {
	double a1,a2,b1,b2,c1,c2,p1,p2;
	cin>>a1>>a2>>b1>>b2>>c1>>c2>>p1>>p2;
	double ar=tri_area(a1,a2,b1,b2,c1,c2);
	double ar1=tri_area(a1,a2,b1,b2,p1,p2);
	double ar2=tri_area(a1,a2,c1,c2,p1,p2);
	double ar3=tri_area(c1,c2,b1,b2,p1,p2);
	if(ar1+ar2+ar3==ar){
		cout<<"Inside the triangle"<<"\n";
	}else
		cout<<"Outside"<<"\n";
}