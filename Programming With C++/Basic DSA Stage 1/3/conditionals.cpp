#include<iostream>
using namespace std;

/*
int main()
{
	int a;
	cout<<"value of a before = "<<a<<endl;
	cin>>a;
	cout<<"value of a after = "<<a<<endl;
	return 0;
}
*/

/*
int main(void)
{
	int a;
	cin>>a;
	if(a>0)
	{
		cout<<"a is positive ";
	}
	return 0;
}
 */
 
 /*
 int main(){
 	int a;
 	cin>>a;
 	if(a>0)
 	{
 		cout<<"a is positive "<<endl;
	}
	else
	{
		cout<<"a is not positive "<<endl;
	}
	return 0;
 }
 
 */
 
 
/*
int main()
{
	int a,b;
	cout<<"enter value of a = "<<endl;
	cin>>a;
	cout<<"enter value of b = "<<endl;
	cin>>b;
	
	if(a>0 && b>0)					//using && ,|| 
	{
		cout<<" number is positive "<<endl;
	}
	if(a<0 && b<0)
	{
		cout<<" number is negative "<<endl;
	}
	return 0;
}
 
*/


/*

int main()
{
	int  a,b;
	cout<<"enter value of a : "<<endl;
	cin>>a;
	cout<<"enter value of b : "<<endl;
	cin>>b;
	if(a>b){
		cout<<"a is grater than b "<<endl;
	}
	else 
	{
		cout<<"b is grater than a "<<endl;
	}
	return 0;
}
 
 */
 
 
 /*
int main()
{
	int	a,b;
	cout<<"enter a value : ";
	cin>>a;
	cout<<"enter a value : ";
	cin>>b;
	
	if(a>b){
		cout<<"a is grater than b "<<endl;
	}
	else
	{
		if(a==b)
		{
			cout<<"a is equal to b ";
		}
		else 
		{
			cout<<"b is grater than a "<<endl;
		}
	}
	return 0;
	
}
 
 */
 
 /*
 int main()
 {
 	int a;
 	cout<<"enter value of a : ";
 	cin>>a;
 	if(a==53)
	 {
	 	cout<<"sushant ";
		 }	
		 if(a>0)
		 {
		 	cout<<"Anna";
		 }
		 else
		 {
		 	cout<<"Patil"<<endl;
		 }
 	return 0;
 }
 
 */
 
 /*
 int main()
 {
 	int a=2;
 	int b=a+1;
 	
 	if((a=3)==b)
 	{
 		cout<<a<<endl;
	 }
	 else
	 {
	  cout<<a+1<<endl;
	 	
 }
	 
 */
 
 /*
 //10/9/2022
 //print number 1 to n
 int main()
 {
 	int n; 
 	cin>>n; 
 	int i=1; 
 	while(i<=n)
 	{
 		cout<<i<<endl;
 		i=i+1;
	 }
	 
	 return 0;
 }
 
 */
 
 /*
//print sum of 1 to n
int main()
{
	int n;
	cin>>n;
	int i=1;
	int sum=0;
	while(i<=n)
	{
		sum=sum+i;			//cheack replacer value of i=1 
		i=i+1;
	}

	cout<<" sum = "<<sum<<endl;
	return 0;
}
*/

/*
//find sum of all even number till n 
int main()
{
	int n;
	cin>>n;
	int sum=0;
	int i=2;
	while(i<=n)
	{
	if(i%2==0)                //do not use curly braces
		sum=sum+i;
		i=i+1;		
	}
	cout<<"sum from "<<1<<" to "<<n<<" = "<<sum<<endl;
}
 */
 
 /*
 // prime or not 
 int main()
 {
 	int n;
 	cin>>n;
 	int i=2;
 	while(i<n)		//not use <= 
 	{
 		if(n%i==0)
 		{
 			cout<<"number is not prime "<<endl;
 			return 0;
 		}
 		i=i+1;
	 }
	 
	 	cout<<"number is prime "<<endl;
	 	return 0;
 }
 
 */
 
 
 							// Pattern Problem
 							
 /*
 		*	*	*	*
		*	*	*	*
		*	*	*	*	
		*	*	*	*
*/															
/* 							
 int main()
 {
 	int n;
 	cin>>n;
 	int i=0;
 	while(i<n)
 	{
 		int j=0;
 		while(j<n)
 		{
 			cout<<" * ";
 			j=j+1;
		 }
			cout<<endl;
			i=i+1;
	 }
	
	 return 0;
 }
 
 */
 
 
 /*
 		1	1	1
 		2	2	2
 		3	3	3
*/
/*
int main()
{
	int n;
	cin>>n;
	int i=1;
	while(i<=n)
	{
		int j=1;
		while(j<=n)
		{
			cout<<i;
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
	return 0;
}
 
 */
 
 
 
 
 
 
 
 
 
 
 
 
 
 