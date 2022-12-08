//uppercase and nonuppercase
#include<iostream>
using namespace std;
int main()
{
	int num=999;
	cout.setf(ios::showbase);
	cout.setf(ios::hex,ios::basefield);
	cout<<"\nhexdecimal = "<<num<<endl;
	
	cout.setf(ios::uppercase|ios::showbase);
	cout.setf(ios::hex,ios::basefield);
	cout<<"\n hexdecimal = "<<num<<endl;
	
	cout<<nouppercase;
	cout<<"\ncalling nouppercase and defult decimal "<<endl;
	cout.setf(ios::hex,ios::basefield);
	cout<<"hexadecimal = "<<num<<endl;
	return 0;
	
}