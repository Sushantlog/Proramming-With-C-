//using four number find largest number
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"enter any four number : ";
	cin>>a>>b>>c>>d;
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			cout<<"large number is : "<<a;
			else
			cout<<"large number is : "<<d;
		}
		else
		{
			if(c>d)
			cout<<"large number is : "<<c;
			else
			cout<<"large number is : "<<d;
		}	
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			cout<<"large number is : "<<b;
			else
			cout<<"large number is : "<<d;
		}
		else
		{
			if(c>d)
			cout<<"large number is : "<<c;
			else
			cout<<"large number is : "<<d;
		}
	}
	return 0;
}