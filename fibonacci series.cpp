#include<dos.h>
#include<iostream>
using namespace std;
int main()
{
	system("color f0");
	int n,a=0,b=1,temp1,x,y,z,temp2;
	int *p,*q,  *k,*l;
	p=&a;
	q=&b;
	
	cout<<"Enter number of values to print in Fibonacci series:";
	cin>>n;
	cout<<"......Fibonacci series......\n";
	for(int i=0;i<n;i++)
	{
		cout<<*p<<" ";
		temp1=*p+*q;
		*p=*q;
		*q=temp1;
	}
	
	cout<<"\n\nStart your Own fibonacci series:\n";
	cout<<"Number 1=>";
	cin>>x;
	cout<<"Number 2=>";
	cin>>y;
	cout<<"How many values do you want to display:";
	cin>>z;
	
	k=&x;
	l=&y;
	
	cout<<".....Fibonacci series.....\n";
	for(int j=0;j<z;j++)
	{
		cout<<*k<<" ";
		temp2=*k+*l;
		*k=*l;
		*l=temp2;
	}
}
