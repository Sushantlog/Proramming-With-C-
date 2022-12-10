#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l;

    l.push_back(1);         //second
    l.push_front(2);          //first

    for(int i:l)
    {
        cout<<i<<endl;

    }

    l.erase(l.begin());         //first will be delete 
    cout<<"after erese : "<<endl;
    for(int i:l)
    {
        cout<<i<<endl;

    }
    cout<<"size of list : "<<l.size()<<endl;


}