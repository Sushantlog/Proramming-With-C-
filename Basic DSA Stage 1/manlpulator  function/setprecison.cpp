//using setprecison
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"enter two number for division : ";
	cin>>a>>b;
	c=a/b;
	
	cout<<setprecision(1)<<c<<endl;
	cout<<setprecision(2)<<c<<endl;
	cout<<setprecision(3)<<c<<endl;
	cout<<setprecision(4)<<c<<endl;
	return 0;
}