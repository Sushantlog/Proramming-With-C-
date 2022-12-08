//                        Binary Search 					//4/10/2022

//find index value using index value 
/*
#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key)
{
	int start=0;
	int end=size-1;
	
    int mid = start + (end-start)/2;		//find mid
	
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			return mid;
		}
		
		if(key>arr[mid])					//left part check
		{
			start=mid+1;
		}
		
		else   //key<arr[mid]		right part check
		{
			end=mid-1;
		}
    	mid = start + (end-start)/2;
	}
	return -1;
}
int main()
{ 
	
//	int even[6]={10,65,50,47,43,55};				//return worng index value (-1)
//	int odd[5]={56,53,45,86,95};
	int even[6]={10,23,35,47,55,66};			//v.v.imp (array most be sorted in binary search)
	int odd[5]={20,25,39,45,53};				//return correct index value
	
	int evenIndex=binarySearch(even,6,47);
	cout<<"index value of 47 is = "<<evenIndex<<endl;

	int oddIndex=binarySearch(odd,5,53);
	cout<<"index value of 53 is = "<<oddIndex<<endl;

	return 0;
	
}
*/

/*
#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {

    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1;
}


int main() { 

    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenIndex = binarySearch(even, 6, 6);

    cout << " Index of 6 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 14);

    cout << " Index of 14 is " << oddIndex << endl;


    return 0;
}

*/


//find left most and right most index value(left and right occurance)				//5/10/2022
/*
#include<iostream>
using namespace std;
int firstOcc(int arr[],int size,int key)
{
	int start=0;
	int end=size-1;
	int ans=-1;
	int mid=start+(end-start)/2;
	
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			ans=mid;
			end=mid-1;
		}
		else if(arr[mid]>key)
		{
			end=mid-1;
		}
		else if(arr[mid]<key)
		{
			start=mid+1;

		}
		mid=start+(end-start)/2;
	}
	return ans;
}

int lastOcc(int arr[],int size,int key)
{
	int start=0;
	int end=size-1;
	int ans=-1;
	int mid=start+(end-start)/2;
	
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			ans=mid;
			start=mid+1;
		}
		else if(arr[mid]<key)
		{
			start=mid+1;
		}
		else if(arr[mid]>key)
		{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	return ans;
}

int main()
{
	int arr[8]={12,22,35,43,43,43,43,56};
	
//	cout<<"first occurance of 43 is at index "<<firstOcc<<endl;			// wrong value return (1)
//	cout<<"last occurance of 43 is at index "<<lastOcc<<endl;	

	cout<<"first occurance of 43 is at index "<<firstOcc(arr,8,43)<<endl;	//value must be passed(calling function)
	cout<<"last occurance of 43 is at index "<<lastOcc(arr,8,43)<<endl;
	return 0;	
}
*/
/*
//Find Total number of occurance in array 
#include<iostream>
using namespace std;
int firstOcc(int arr[],int size,int key)
{
	int start=0;
	int end=size-1;
	int ans=-1;
	int mid=start+(end-start)/2;
	
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			ans=mid;
			end=mid-1;
		}
		else if(arr[mid]>key)
		{
			end=mid-1;
		}
		else if(arr[mid]<key)
		{
			start=mid+1;

		}
		mid=start+(end-start)/2;
	}
	return ans;
}

int lastOcc(int arr[],int size,int key)
{
	int start=0;
	int end=size-1;
	int ans=-1;
	int mid=start+(end-start)/2;
	
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			ans=mid;
			start=mid+1;
		}
		else if(arr[mid]<key)
		{
			start=mid+1;
		}
		else if(arr[mid]>key)
		{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	return ans;
}

int main()
{
	int arr[8]={12,22,35,43,43,43,43,56};
	
	cout<<"first occurance of 43 is at index "<<firstOcc(arr,8,43)<<endl;	
	cout<<"last occurance of 43 is at index "<<lastOcc(arr,8,43)<<endl;
	
//	cout<<"total number of occurance is "<<(firstOcc-lastOcc)+1<<endl;
	return 0;	
}

*/



//find pivot in an array						7/10/2022
#include<iostream>
using namespace std;
int main()
{
	int getPivot(int arr[],int n);
//	int arr[10]={2,5,7,9,10,25,32,5,3,4};
	int arr[5]={3,8,10,17,1};
	cout<<"pivot value of index is : "<<getPivot(arr,10)<<endl;
	
	return 0;
}
int getPivot(int arr[],int n)
{
	int	start=0;
	int end=n-1;
	int mid=(start+(end-start)/2);
	
	while(start<end)
	{
		if(arr[mid]>=arr[0])
		{
			start=mid+1;
		}
		else
		{
			end=mid;
		}
		mid=(start+(end-start)/2);
	}
	return start;
}















