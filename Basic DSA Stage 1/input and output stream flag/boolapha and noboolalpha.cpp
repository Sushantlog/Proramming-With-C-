//boolapha and noboolalpha
#include<iostream>
using namespace std;
int main()
{
	bool flag= true;
	cout<<boolalpha;
	cout<<"\n setting boolalpha \n ";
	cout<<"\n flag value = "<<flag<<endl;
	cout<<"\n setting noboolalpha \n";
	cout<<noboolalpha;
	cout<<"\n flag value = "<<flag<<endl;
	return 0;
}