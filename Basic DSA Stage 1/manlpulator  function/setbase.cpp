//using dec,hex,oct manipulator
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int value;
	cout<<"enter number : ";
	cin>>value;
	
	cout<<"decimal base = "<<dec<<value<<endl;
	cout<<"hexadecimal base = "<<hex<<value<<endl;
	cout<<"octal base = "<<oct<<value<<endl;
	return 0;
}