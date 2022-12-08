#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter any three number : ";
	cin>>a>>b>>c;
	
	if(a>b)
	{
		if(a>c)
		{
			cout<<"large number is : "<<a;
		}
		else
		{
			cout<<"large number is : "<<c;
		}
	}
	else
	{
		if(b>c)
		{
			cout<<"large number is : "<<b;
		}
		else
		{
			cout<<"large number is : "<<c;
		}
	}
	return 0;
}