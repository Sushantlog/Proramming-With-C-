 							// Pattern Problem
 /*							
 #include<iostream>
 using namespace std;	
*/	 
	 						
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
 
 
// 11/9/2022

 /*
 		3	2	1
 		3	2	1
 		3	2	1
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
 			cout<<n-j+1;
 			j=j+1;
		 }
		 cout<<endl;
		 i=i+1;
	 }
	 return 0;
 }
 
 
*/
 
/*		1	2	3
		1	2	3
		1	2	3
*/
/*
  int main()
  {
  	int n;
  	cin>>n;

  	for(int i=1;i<=n;i++)
  	{
  		for(int j=1;j<=n;j++)
  		{
  			cout<<" "<< j ;
		  }
		  cout<<endl;
	  }
	  return 0;
  }
 
 
 */
 
 /*
 		1	2	3
 		4	5	6
 		7	8	9
*/
/*
int main()
{
	int n;
	cin>>n;
	int i=1;
	int count=1;
	while(i<=n)
	{
		int j=1;
		while(j<=n)
		{       
			cout<<count<<" ";
			count=count+1;
			j=j+1;
		}
		cout<<endl;	
		i=i+1;		
	}
	return 0;
}
 
 */
 
 
 /*
 		*
 		*	*
 		*	*	*
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
		while(j<=i)
		{
			cout<<" * ";		//value is check " * *=i,j
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
 
 */
 
 /*
 		1
 		2	2
 		3	3	3
*/
/*
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<i;
		}
		cout<<endl;
	}
	return 0;
}
  */   


 /*
 		1
 		2	3
 		4	5	6
 		7	8	9	10
*/
/*
int main()												
{
	int n;
	cin>>n;
	int count=1;
	for(int i=1;i<=n;i++)
	{
	
		for(int j=1;j<=i;j++)
		{												
			cout<<count<<" ";
			count=count+1;;
		}
		cout<<endl;
	}
	return 0;
}
  */

 /*
  int main()
{
	int n;
	cin>>n;
	int i=1;
	int count=1;
	while(i<=n)
	{
		int j=1;							
		while(j<=i)
		{       
			cout<<count<<" ";
			count=count+1;
			j=j+1;
		}
		cout<<endl;	
		i=i+1;		
	}
	return 0;
}
 
 */
 
 
 //14/09/2022
 /*
 		1
 		2	3
 		3	4	5
 		4	5	6	7
*/
 
 /*
 #include<iostream>
 using namespace std;
 
 int main()
 {
 	int n,i;
 	cin>>n;
	
 	for(int i=1;i<=n;i++)
 	{
 		int count=i;
 		for(int j=1;j<=i;j++)
 		{
 			cout<<count<<" ";
 			count++;
		 }
		 cout<<endl;
	 }
	 return 0;
 	
 }
 
 */
 
 /*
 		1
 		2	1
 		3	2	1
 		4	3	2	1
*/
/*
 #include<iostream>
 using namespace std;
 int main()
 {
 	int n;
 	cin>>n;
 	for(int i=1;i<=n;i++)
 	{
 		int count=i;
 		for(int j=1;j<=i;j++)
 		{
 			cout<<count<<" ";
 			count--;
		 }
		 cout<<endl;
	 }
	 return 0;
 }
 */
 
 
//15/09/2022

/*
		A	B	C
		A	B	C
		A	b	c
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int i=1;
	while(i<=n)
	{
		char ch='A';
		int j=1;
		while(j<=n)
		{
			cout<<ch<<" ";
			ch++;
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
 } 
 
 */
 
 /*
 		A	A	A
 		B	B	B
 		C	C	C
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	char ch='A';
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<ch<<" ";
		}
		cout<<endl;
		ch++;
	}
	return 0;
 } 
 
 */
 
 /*
 		A	B	C
 		D	E	G
 		H	I	J
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=1;
	char count='A';
	while(i<=n)
	{
		int j=1;
		while(j<=n)
		{
			cout<<count<<" ";
			count++;
			j++;
			
		 } 
		 cout<<endl;
		 i++;
	}
	return 0;
}

 */

/*
		A	B	C
		B	C	D
		C	D	E
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		char count= 'A'+i-1;
		for(int j=1;j<=n;j++)
		{
			cout<<count<<" ";
			count ++;
		}
		cout<<endl;
	}
	return 0;
}
 
 */
// -----------------------------------------------------------------------------------------------------
 //16/09/2022
 
  /*
  	A
  	B	B
  	C	C	C
 */
 /*
 #include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char ch='A';
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<ch<<" ";
			
		}
		cout<<endl;
		ch++;
	}
	return 0;
 } 
 
 */
 
 /*
 	A
 	B	C	
 	D	E	F
 	G	H	I	J
*/
 /*
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char ch='A';
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<ch<<" ";
			ch++;
		}
		cout<<endl;
	}
	return 0;
}

*/

/*
		A
		B	C	
		C	D	E
		D	E	F	G
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int i=1;
	char ch='A'+i-1;
	while(i<=n)
	{
		int j=1;
		while(j<=i)
		{
			cout<<ch<<" ";
			ch++;
			j++;
		}		
		cout<<endl;
		i++;
	}
	return 0;
}
*/
		 
 /*
 		D
 		C	D
 		B	C	D
 		A	B	C	D
 */
 /*
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		char ch='A'+n-i;
		for(int j=1;j<=i;j++)
		{
			cout<<ch;
			ch++;
		}
		cout<<endl;
	}
	return 0;
}
 */
 
//20/09/2022

/*
				*
 			*	*
 		*	*	*
 	*	*	*	*
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int i=1;
	while(i<=n)
	{
		int space=1;
		while(space<=n-i)
		{
			cout<<" ";
			space++;
		}
		int j=1;
		while(j<=i)
		{
			cout<<"*";
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
*/
 
 
 /*
 *	*	*	*
 *	*	*
 *	*
 *
 */
 
 #include<iostream>
 using namespace std;
 int main()
 {
 	int n;
 	cin>>n;
 	
 	int i=1;
 	while(i<=n)
 	{
 		int j=1;
 		while(j<=n-i+1)
 		{
 			cout<<"*";
 			j++;
		 }
		 cout<<endl;
		 i++;
	 }
	 return 0;
 }
 

 
/*
	*	*	*	*
		*	*	*
			*	*
				*
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		for(int space=1;space<i;space++)
		{
			cout<<" ";
		}
		for(int j=1;j<=n-i+1;j++)
		{
			cout<<"*";
		}
			cout<<endl;
	}
	return 0;
}
 */
 
 /*
 		1	1	1	1	
 			2	2	2
 				3	3	
 					4
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		for(int space=1;space<i;space++)
		{
			cout<<" ";
		}
		for(int j=1;j<=n-i+1;j++)
		{
			cout<<i;
		}
		cout<<endl;
	}
	return 0;
}
 
*/

/*
				1
			2	2
		3	3	3
	4	4	4	4
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		for(int space=1;space<=n-i;space++)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<i;
		}
		cout<<endl;
	}
	return 0;
}

*/

/*
				1
			2	3
		4	5	6
	7	8	9	10
*/
/*
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int num=1;
	for(int i=1;i<=n;i++)
	{
		for(int space=1;space<=n-i;space++)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<num;
			num++;
		}
		cout<<endl;
	}
	return 0;
}
*/





















 
 
 
 
 
