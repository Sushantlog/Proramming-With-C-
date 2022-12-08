//                               STL										14/10/2022
//Array
#include<iostream>
#include<array>
using namespace std;
int main()
{
	int basic[3]={1,2,3};
	array<int,4>a={1,2,3,4};		//static array(delaration of Array)
	
	int size=a.size();
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<endl;		
	}	
}
