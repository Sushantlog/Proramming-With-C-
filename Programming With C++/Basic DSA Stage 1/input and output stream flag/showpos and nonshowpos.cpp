//showpos and nonshowpos
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter a number \n";
	cin>>num;
	
	cout<<"decimal = "<<num<<endl;
	cout.setf(ios::showbase);
	cout.setf(ios::showpos);

	cout.setf(ios::oct,ios::basefield);
	cout<<"octal = "<<num<<endl;
	
	cout.setf(ios::hex,ios::basefield);
	cout<<"hexadecimal = "<<num<<endl;			//showbase
	
	cout.setf(ios::dec,ios::basefield);
	cout<<"decimal = "<<num<<endl;				//showpos
	
	cout<<noshowpos;
	cout<<"\n calling noshowpos fromat flag "<<endl;
	cout<<"decimal = "<<num<<endl;
	return 0;
	
}