#include<iostream>
#include<vector>            //include vector lab
using namespace std;
int main()
{
    vector<int>v; //creating vector
    cout<<"capacity of vector :"<<v.capacity()<<endl;     //total element of vector

    v.push_back(1);                             //add element 
    cout<<"capacity of vector : "<<v.capacity()<<endl;  

    v.push_back(2);
    cout<<"capacity of vector : "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity of vector : "<<v.capacity()<<endl;

    
    cout<<" present element in vector : "<<v.size()<<endl;      //size find out

    cout<<" position second :"<<v.at(1)<<endl;
    cout<<" first :"<<v.front()<<endl;                  //first locatin
    cout<<" last :"<<v.back()<<endl;                //last location
 
    cout<<"before pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();               //only last element delete

    cout<<"after pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"before clear :"<<v.size()<<endl;
    v.clear();                                      // delete all 
    cout<<"after clear :"<<v.size()<<endl;

}
