#include<iostream>
#include<array>     //stl lab
using namespace std;
int main()
{
    int basic[4]={14,15,46,53};
    array<int,4> a ={1,2,3,4};
    int size=a.size();
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"at scecond position :"<<a.at(3)<<endl;
    cout<<"check empty or not "<<a.empty()<<endl;
    cout<<"first number is :"<<a.front()<<endl;
    cout<<"first number is :"<<a.back()<<endl;  
    
}