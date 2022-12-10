#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>d;

    d.push_back(1);             //in deque delete and insert in both side 
    d.push_front(2);

    for(int i:d)
    {
        cout<<i<<endl;
    }

   /* d.pop_back();
    for(int i:d)
    {
        cout<<i<<endl;
    }
    */

   /*
    d.pop_front();
    for(int i:d)
    {
        cout<<i<<endl;
    }
    */

    cout<<"at scecond position :"<<d.at(1)<<endl;
    cout<<"check empty or not :"<<d.empty()<<endl;
    cout<<"first number is :"<<d.front()<<endl;
    cout<<"last number is :"<<d.back()<<endl;

    cout<<"before erase :"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);         //in deque range will be spcify
    cout<<"after erase :"<<d.size()<<endl;
    for (int i:d)
    {
        cout<<i<<endl;
    }
}