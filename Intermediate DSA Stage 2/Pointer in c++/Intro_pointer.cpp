#include<iostream>
using namespace std;
int main()
{
    int num=5;

    cout<<num<<endl;

    cout<<"address of num : "<<  &num <<endl;

    int *ptr=&num;

    cout<<"address is :"<<ptr<<endl;
    cout<<"value is :"<<*ptr<<endl;

    double p=4.5;
    double *a=&p;

    cout<<"address is :"<<a<<endl;
    cout<<"value is :"<<&p<<endl;
    cout<<"value is :"<<*a<<endl;
    
}