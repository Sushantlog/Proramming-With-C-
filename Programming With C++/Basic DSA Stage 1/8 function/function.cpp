//										Function												23/09/2022

/*function type 3 
1.no data communication between function
2.one way data communction
3.two way data communction
*/
//--------------------------------------------------------------------------
//1.no data communication between function

/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	void display(void);		//function declaration
	display();				//function calling 
	return 0;
}
void display()
{
	for(int i=5;i>=1;--i)
	{
		for(int j=i;j>=1;--j)
		{
			cout<< j;
		}
		cout<<endl;
	}
}

*/
//----------------------------------------------------------------------

//2.one way data communication 
/*only pass value of main program to function defination and calculate as well as display result */

//Q.find the area and cirumfereance of circle  using type 2
/*
#include<iostream>
using namespace std;
float pi=3.14159;			//micro

int main()
{
	float radius;
	void area(float a);							//function declaration 
	void area_of_cirumferance(float a);				
	
	cout<<"enter radius = ";
	cin>>radius;
	
	area(radius);								//function calling 
	area_of_cirumferance(radius);
	return 0;
}
float area(float radius)						//function defination
{
	float area;
	area=pi*radius*radius;
	cout<<" area of cicle = "<<area<<endl;
}
float area_of_cirumferance(float radius)	 //function defination
{
	float cirumferance;
	cirumferance=2*pi*radius;
	cout<<" cirumferance of cicle = "<<cirumferance<<endl;
}
*/

//-----------------------------------------------------------------------
//3.two way data communcation 


/* writing a user define function is passing some formal arguments to a function from 
	calling portion of the program and the computed value if any is transfrerred back to the caller 
*/

//Q.perform arithmetic operation using type 3
/*                   
#include<iostream>
using namespace std;
int main()
{
	int x,y,value;
	char ch;
	void manu();
	int add(int x,int y);												//formal parameter
	int sub(int x,int y);
	int mult(int x,int y);
	int div(int x,int y);
	cout<<"enter two intger value = "<<endl;
	cin>>x>>y;
	manu();
	cout<<"any one alphabeat a.s,m,d "<<endl;
	cin>>ch;
	switch(ch)
	{
		case'a':
		value=add(x,y);													//actual parameter
		cout<<"x = "<<x<<" "<<"y = "<<y<<endl;
		cout<<"sum = "<<value;
		break;
		
		case's':
		value=sub(x,y);	
		cout<<"x = "<<x<<" "<<"y = "<<y<<endl;
		cout<<"sub = "<<value;
		break;
		
		case'm':
		value=mult(x,y);
		cout<<"x="<<x<<"y="<<y<<endl;
		cout<<"mult = "<<value;
		break;	
		
		case'd':
		value=div(x,y);
		cout<<"x="<<x<<"y="<<y<<endl;
		cout<<"div = "<<value;
		break;	
	}
	return 0;	
}
void manu()
{
	cout<<" a-> addition "<<endl;
	cout<<" s-> substration"<<endl;
	cout<<" m-> multiplication"<<endl;
	cout<<" d-> division "<<endl;
	cout<<" q-> quit "<<endl;
	cout<<"------------------------------"<<endl;
}
int add(int a,int b)											//formal parameter
{
	return(a+b);
}
int sub(int c,int d)
{
	return(c-d);
}
int mult(int e,int f)
{
	return(e*f);
}
int div(int g,int h)
{
	return(g/h);
}

*/

//----------------------------------------------------------------------

//Default Argument 
/*
*/

//Q.program to find the sum of the given number using defult argument declaration
/*
#include<iostream>
using namespace std;

int main()
{
	void sum(int a,int b,int c=10,int d=20);
	int a,b,c,d;
	cout<<"enter two intger value :";
	cin>>a>>b;
	sum(a,b);
	return 0;
}
void sum(int a,int b,int c,int d)
{
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"c="<<c<<endl;
	cout<<"d="<<d<<endl;
	cout<<"sum="<<a+b<<endl;	
}
 
*/

//==========================================================================================
//solve problem by lectur 8

//Switch case :

//using intger value
/*
#include<iostream>
using namespace std;
int main()
{
	int num=2;
	cout<<endl;
	
	switch(num)
	{
		case 1:cout<<" first "<<endl;
				break;
		case 2:cout<<" second "<<endl;
				break;
		default:cout<<" it is default case "<<endl;
	}
	cout<<endl;
	return 0;
}

 */
 
 //using characters 
/*
 #include<iostream>
 using namespace std;
 int main()
 {
 	char ch='b';
 	switch(ch)
 	{
 		case'a':cout<<" alphabet of a "<<endl;
 				break;
 		case'b':cout<<" alphabet of b "<<endl;
 				break;
 		default:cout<<" it is defult "<<endl;
	 }
	 return 0;
 	
 }

*/

/*continue statement :

*/

//Q.creating calcaluter using switch case
/*
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter integer value of a = "<<endl;
	cin>>a;
	cout<<"enter intger value of b = "<<endl;
	cin>>b;
	
	char op;
	cout<<"enter operation you want to perform = "<<endl;
	cin>>op;
	switch(op)
	{
		case'+':cout<<(a+b)<<endl;
				break;
		case'-':cout<<(a-b)<<endl;
				break;
		case'*':cout<<(a*b)<<endl;
				break;
		case'/':cout<<(a/b)<<endl;
				break;
		case'%':cout<<(a%b)<<endl;
				break;
		default:cout<<"plase inter valid operation ! ";
	}
	return 0;
}
*/

//---------------------------------------------------------------------------
//Q.without using function find out power of (a of b)
/*
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	
	int ans=1;
	for(int i=1;i<=b;i++)
	{
		ans=ans*a;		
	}
	cout<<"answer = "<<ans<<endl;
	return 0;
}

*/

//Q.with using function find out power of (a of b)
/*
#include<iostream>
using namespace std;
int main()
{
	int power(int a,int b);			//declaration
	int a,b;
	cin>>a>>b;
	
	int answer=power(a,b);				//calling function
	cout<<" answer = "<<answer<<endl;
	return 0;
}
int power(int a,int b)					//function defenation
{
	int ans=1;
	for(int i=1;i<=b;i++)
	{
		ans=ans*a;
	}
	return ans;
}
*/

//Q.find number is even or odd
/*
#include<iostream>
using namespace std;
bool isEven(int no)
{
	if(no & 1)							//1=even , 0=odd
	{
		return 0;
	}
	else 
	{
		return 1;
	}
}
int main()
{
	int num;
	cin>>num;
	
	if(isEven(num))
	{
		cout<<"number is even "<<endl;	
	}
	else
	{
		cout<<"number is odd "<<endl;
	}
	return 0;
}

*/

//finding factorial 
/*
#include<iostream>
using namespace std;
int main()
{
	int factorial(int n);
	int n;
	cin>>n;
	
	int fact=factorial(n);
	cout<<"factorial is "<<fact<<endl;
	return 0;
}
int factorial(int a)
{
	int fact=1;
	for(int i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	return fact;
}

*/

//Q.finding nCr value
 /*
#include<iostream>
using namespace std;
int main()
{
	int nCr(int n,int r);
	int factorial(int n);
	int n,r;
	cin>>n>>r;
	
	int answer=nCr(n,r);
	cout<<" nCr "<<answer<<endl;
	return 0;
}
int factorial(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int nCr(int n,int r)
{

	int num=factorial(n);
	int deno=factorial(r)*factorial(n-r);
	return num/deno;
}

*/

//								OR

/*
#include<iostream>
using namespace std;
int factorial(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int nCr(int n,int r)
{

	int num=factorial(n);
	int deno=factorial(r)*factorial(n-r);
	return num/deno;
}
int main()
{
	int n,r;
	cin>>n>>r;
	
	int answer=nCr(n,r);
	cout<<" nCr "<<answer<<endl;
	return 0;
}

*/

//Q.printing counting
/*
#include<iostream>
using namespace std;
int main()
{
	int printCount(int a);
	int n;
	cin>>n;
	
	printCount(n);
	return 0;
}
int printCount(int a)
{
	for(int i=1;i<=a;i++)
	{
		cout<<i<<" ";
	}
	cout<<endl;
}

*/

//findout number is prime or not 
/*
#include<iostream>
using namespace std;
int main()
{
	int isPrime(int n);
	int n;
	cin>>n;
	
	if(isPrime(n))
	{
		cout<<" number is prime "<<endl;
	}
	else
	{
		cout<<" number is not prime "<<endl;
	}
	return 0;
}
int isPrime(int n){
	for(int i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
}
*/


























