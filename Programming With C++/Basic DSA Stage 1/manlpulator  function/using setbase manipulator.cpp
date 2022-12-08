//using setbase manipulator
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int value;
	cout<<"enter number : ";
	cin>>value;
	
	cout<<"decimal base = "<<setbase(10)<<value<<endl;
	cout<<"hexadecimal base = "<<setbase(16)<<value<<endl;
	cout<<"octal base = "<<setbase(8)<<value<<endl;
	return 0;
}