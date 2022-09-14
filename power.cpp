#include<iostream>

using namespace std;

int main()
{
	int a,b,i,c=0,d;
	cout<<"Enter number for power";
	cin>>a;
	cout<<"Enter power";
	cin>>b;
	
	for(i=0;i<=b;i++)
	{
		c=a*a;
	}
	
	cout<<"Total value in c = "<<c;
}
