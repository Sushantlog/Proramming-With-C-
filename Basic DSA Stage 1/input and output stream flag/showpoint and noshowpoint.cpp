//showpoint and noshowpoint
#include<iostream>
using namespace std;
int main()
{
	float a,b,c,d;
	a=1.2345679;
	b=34.000;
	c=1.3400;
	d=-123.56770001;
	
	cout.setf(ios::showpoint);
	cout<<"a = "<<a<<"\n";
	cout<<"b = "<<b<<"\n";
	cout<<"c = "<<c<<"\n";
	cout<<"d = "<<d<<"\n";
	cout<<"calling noshowpoint \n";
	cout<<noshowpoint;
	cout<<"a = "<<a<<"\n";
	cout<<"b = "<<b<<"\n";
	cout<<"c = "<<c<<"\n";
	cout<<"d = "<<d<<"\n";
	return 0;	
}