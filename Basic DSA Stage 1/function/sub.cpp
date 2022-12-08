#include<iostream>
using namespace std;
 int main()
 {
 	int sum(int z,int x);
 	int sub(int s,int p);
 	int a,b;
 	cin>>a>>b;
  	sum(a,b);
 	cout<<"sum= "<<sum<<endl;
 	sub(a,b);
 	cout<<"substration = "<<sub<<endl;
 	return 0;
 }
 int sum(int z,int x)
 {
 	int sum=z+x;
 	return (sum);
 }
 int sub(int s,int p)
 {
 	int sub=s-p;
 	return (sub);
 }