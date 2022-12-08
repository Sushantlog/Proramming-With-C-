/*
#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key)
{
	int start=0;
	int end=size-1;
	
    int mid = start + (end-start)/2;
	
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			return mid;
		}
		
		if(key>arr[mid])
		{
			start=mid+1;
		}
		
		else
		{
			end=mid-1;
		}
    	mid = start + (end-start)/2;
	}
	return -1;
}
int main()
{
	
	int even[6]={11,23,56,48,75,99};
	int odd[5]={10,65,78,85,95};
	
	int evenindex=binarySearch(even,6,99);
	cout<<"index value of 99 is = "<<evenindex<<endl;

	int oddindex=binarySearch(odd,5,95);
	cout<<"index value of 95 is = "<<oddindex<<endl;
}
*/


//Binary search
#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key)
{
	int start=0;
	int end=size-1;
	int mid=(start+end)/2;

	while (start<=end)
	{
		if(arr[mid]==key)
		{
			return mid;
		}
		if(key>arr[mid])
		{
			start=mid+1;
		}
		else{
			end=mid-1;
		}
		int mid=(start+end)/2;
	}
	return -1;	
}
int main()
{
	int even[6]={12,35,65,85,90,97};
	int odd[5]={20,30,40,45,50};

	int evenindex=binarySearch(even,6,90);
	cout<<"index of value of 90 is = "<<evenindex<<endl;

	int oddindex=binarySearch(odd,5,40);
	cout<<"index of value of 40 is = "<<oddindex<<endl;

	return 0;
}

