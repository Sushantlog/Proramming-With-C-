#include<iostream>
using namespace std;
int main()
{
    int findDuplicate(int arr[],int s);         //declear function 
    int n;
    int s;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        
        cout<<"enter array size :"<<endl;       //array size
        cin>>s;

        for(int j=0;j<s;j++)        //taking array element 
        {
            cin>>arr[j];
        }
        findDuplicate(arr,s);
        return 0;
    }
} 
    int findDuplicate(int arr[],int s)  //funtction defination 
    {
        int ans=0;
        for(int i=0;i<s;i++)
        {
            for(int j=i+1;j<s;j++)
            {
                if(arr[i]==arr[j])      //cheke int array duplict are present 
                {
                    cout<<"Duplicate of array element present : "<<arr[j]<<endl;
                }
            }
        }
       
    }
