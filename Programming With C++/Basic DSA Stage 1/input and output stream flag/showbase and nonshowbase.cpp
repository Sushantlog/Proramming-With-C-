//showbase and nonshowbase 
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter a number \n";
	cin>>num;
	
	cout.setf(ios::showbase);
	cout<<"decimal = "<<num<<endl;
	
	cout.setf(ios::oct,ios::basefield);
	cout<<"octal = "<<num<<endl;
	
	cout.setf(ios::hex,ios::basefield);
	cout<<"hexadecimal = "<<num<<endl;
	
	cout.setf(ios::dec,ios::basefield);
	cout<<"decimal = "<<num<<endl;
	
	cout<<noshowbase;
	cout<<"\n calling noshowbase and defult decimal "<<endl;
	cout<<"decimal = "<<num<<endl;
	return 0;
	
}