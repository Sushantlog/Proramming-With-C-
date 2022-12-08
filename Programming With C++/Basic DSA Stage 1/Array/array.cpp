//											Array							27/09/2022

/* An array is collection of identical data object which are stored in 
consetive memory location under a common heading or a variable name 

expressed:
	storage_class  data_type  array_name(expression)

*/
/*
#include<iostream>
using namespace std;
int main()
{
	int a[10]={0,1,2,3,4,5,6,7,8,9};
	cout<<"contents of array "<<endl;
	for(int i=0;i<=a[i];i++)
	cout<<a[i];
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int a[10]={0,1,2,3,4,5,6,7,8,9};
	cout<<"contents of array "<<endl;
	for(int i=0;i<=a[i];i++)
	cout<<a[i]<<endl;			//can use endl == \n
	return 0;
}

*/

//using "\t"

/*
#include<iostream>
using namespace std;
int main()
{
	int a[10]={0,1,2,3,4,5,6,7,8,9};
	cout<<"contents of array "<<endl;
	for(int i=0;i<=a[i];i++)
	cout<<a[i]<<"\t";			
	return 0;
}

*/
/*
//using setw(set wight)

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a[10]={0,1,2,3,4,5,6,7,8,9};
	cout<<"contents of array "<<endl;
	for(int i=0;i<=9;++i)
	cout<<a[i]<<setw(5) ;			
	return 0;
}
*/

/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a[100];
	int i,n;
	cout<<"enter how many number in the array ";
	cin>>n;
	cout<<"enter the array element :"<<endl;
	for(i=0;i<=n-1;i++)
	{
		cin>>a[i];
	}
	cout<<"content of an array :"<<endl;
	for(i=0;i<=n-1;i++)
	{
		cout<<a[i]<<setw(5);
	}
	return 0;
}

*/

//fing out the sum of all element 
/*
#include<iostream>
using namespace std;
int main()
{
	int display(int a[],int n);
	int sumarray(int a[],int n);
	int a[100];
	int n,sum;
	cout<<"enter how many number you want :"<<endl;
	cin>>n;
	cout<<"enter array element : "<<endl;
	for(int i=0;i<=n-1;i++)
	{
		cin>>a[i];
	}
	cout<<"content of array : "<<endl;
	display(a,n);
	sum=sumarray(a,n);
	cout<<"sum of given array element : "<<sum<<endl;
	
	return 0;
}
int display(int a[],int n)
{
	for(int i=0;i<=n-1;i++)
	cout<<a[i]<<" "<<endl;
}
int sumarray(int a[],int max)
{
	int temp=0;
	for(int i=0;i<=max-1;i++)
	{
		temp=temp+a[i];
	}
	return temp;
}

*/

/*Q. a program to read a set of numbers from the keyword and to sort 
out the given array of element in ascending order using a function
*/

/*
#include<iostream>
using namespace std;
const int MAX=100;			//imp line to execute program other wise display garbeg valu
int a[MAX];
int main()
{
	int input(int n); 
	int display(int a[],int n);
	int sorted(int a[],int n);
	int n;

	cout<<"how many number you want : "<<endl;
	cin>>n;
	cout<<"taking input to user : "<<endl;
	input(n); 
	cout<<"unsorted array : "<<endl;
	display(a,n);
	sorted(a,n);
	cout<<"sorted array :"<<endl;
	display(a,n);
	return 0;
}
int input(int n)
{
	for(int i=0;i<=n-1;i++)
	cin>>a[i];
}
int display(int a[],int n)
{
	for( int i=0;i<=n-1;i++)
	cout<<a[i]<<endl;
	
}
int sorted(int a[],int n){
	int	temp;
	for(int i=0;i<=n-1;i++)
	{
		for(int j=0;j<=n-2;j++)
		if(a[i]<a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}

*/

//Multidimensional array
/*int value [20][10][30]
	int value [10][20]
*/
/*
//display content of matrix 

#include<iostream>
#include<iomanip>
const int MAX=10;
int a[MAX][MAX];
using namespace std;
int main()
{
	int n;
	cout<<" enter the order of matrix : "<<endl;
	cin>>n;
	cout<<" enter the element of array  : "<<endl;
	for(int i=0;i<=n-1;i++)
	{
		for(int j=0;j<=n-1;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<" input matrix is :"<<endl;
	for(int i=0;i<=n-1;i++)
	{
		for(int j=0;j<=n-1;j++)
		{
			cout<<setw(5)<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}
*/
/*
#include<iostream>
#include<iomanip>
using namespace std;
const int N=3;
const int M=4;
int main()
{
	double a[N][M]=
	{
		{21,65,8},
		{45,58,69},
		{88,56,89}	
	};
	cout<<"content of matrix is : "<<endl;
	for(int i=0;i<=N-1;i++)
	{
		for(int j=0;j<=M-1;j++)
		{
		//	cout<<setprecision(2);
			cout<<setw(5)<<a[i][j];
		}
		cout<<endl;
	}
 } 
*/

/*
//array with function 
#include<iostream>
using namespace std;
int main()
{/*
	int printArray(int third,int n);
	int number[15];
	cout<<"value of 14 index is : "<<number[14]<<endl;
*/	

/*
	int third [15]={2,7};
	int n=15;
	printArray(third,n);
	int thirdSize=sizeof(third)/sizeof(int);
	cout<<"third size is : "<<thirdSize <<endl;
	return 0;
}
void printArray(int third,int n);
{
	cout<<"printing the array : "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";	
	}	
	cout<<"printing is done"<<endl;
}
*/

//finding  Maximum /minimum in an array							//1/10/2022
/*
#include<iostream>
int a[100];
int INT_MIN;
int INT_MAX;
using namespace std;
int main()
{
	int getMax(int arr[],int size);
	int getMin(int arr[],int size);
	int n;
	cin>>n;
	
	cout<<"enter array element : "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"maximum number is: "<<getMax(a,n)<<endl;
	cout<<"minimum number is: "<<getMin(a,n)<<endl;
	
	return 0;
}
int getMax(int arr[],int size)
{
	int max=INT_MIN;
	
	for(int i=0;i<size;i++)
	{
		if(a[i]>=max)
		{
			max=a[i];
		}
	}
	return max;	
}
int getMin(int arr[],int size)
{
	int min=INT_MAX;
	
	for(int j=0;j<size;j++)
	{
		if(a[j]<=min)
		{
			min=a[j];
		}
	}
	return min;
}

*/

//scope of array
/*
#include<iostream>
using namespace std;
void update(int arr[],int n)
{
	cout<<"inside the function is : "<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"going back to main function..."<<endl;
}
int main()
{
	int arr[3]={1,2,3};
	
	cout<<"updating array start..."<<endl;
	update(arr,3);
	
	for(int i=0;i<3;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
	
}

*/
//linear search

/*
#include<iostream>
using namespace std;
int a[100];
int arr[100];
int main()
{
	bool search(int arr[],int n,int key);

	int n;
	cout<<"enter size of element is : "<<endl;
	cin>>n;
	
	cout<<"enter array element is : "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"enter key you want to search : "<<endl;
	int key;
	cin>>key;
	
	bool found=search(arr,n,key);
	
	if(found)
	{
		cout<<"key is present "<<endl;
	}
	else
	{
		cout<<"key is absent "<<endl;
	}
	return 0;
}
bool search(int arr[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			return 1;
		}
	}
	return 0;
}
*/


//printing alternative number :
/*
approch is i/p= arr[5]={2,4,3,6,8}
		   o/p= arr[5]={4,2,6,3,8}
*/
/*
#include<iostream>
using namespace std;
void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	
}
void swapAlternative(int arr[],int n)
{
	for(int i=0;i<n;i+=2)					//+= sign is imp 
	{
		if(i+1<n)
		{
			swap(arr[i],arr[i+1]);
		}
	}
}
int main()
{


	int even[8]={2,5,9,4,7,6,1,0};
	int odd[5]={11,33,9,76,43};
	
	swapAlternative(even,8);
	printArray(even,8);
	
	swapAlternative(odd,5);
	printArray(odd,5);
	
	return 0;	
}		   

*/

//===============================================================================================
//25/11/2022

#include<iostream>
using namespace std;
int main()
{
	int n,size;
	int SwapAlternative(int even[],int n);
	int printArray(int even[],int n);
	int even[8]={2,5,9,4,7,6,10};
	int odd[5]={11,33,9,76,43};

	SwapAlternative(even,8);
	printArray(even,8);

	SwapAlternative(odd,5);
	printArray(odd,5);

	return 0;

}
int SwapAlternative(int even[],int size)
{
	for(int i=0;i<size;i+=2)
	{
		if(i+1<size)
		{
			swap(even[i],even[i+1]);
		}
	}
}

int printArray(int even[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<even[i]<<" ";
	}
	cout<<endl;
}

//26/11/2022
/*
//only for check how for loop work
#include<iostream>
using namespace std;
int main()
{
	int n=5;
	for(int i=0;i<n-1;i++)
	{
		for(int j=1;j<n-1;j++)
		{
			for(int k=2;k<n-1;k++)
			{
				cout<<i<<" "<<j<<" "<<k<<" "<<endl;
			}
		}
	}
}
*/

























































































 

















