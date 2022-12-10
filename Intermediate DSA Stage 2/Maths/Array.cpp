#include<iostream>
#include<array>     //stl lab
using namespace std;
int main()
{
    array<int,4> a ={1,2,3,4};
    int size=a.size();
    
    cout<<"at scecond position :"<<a.at(3)<<endl;
    cout<<"check empty or not "<<a.empty()<<endl;
    cout<<"first number is :"<<a.front()<<endl;
    cout<<"first number is :"<<a.back()<<endl;

}
  
  
