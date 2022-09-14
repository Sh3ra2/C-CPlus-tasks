#include<iostream>
using namespace std;
int add(int x);
int main()
{
	int a;
	cout<<"enter number to count till 100:";
	cin>>a;
	add(a);
	cout<<"add of "<<a<<" is "<<add(a);
}
int add(int x)
{
	if (x==0)
	{
		return 1;
	}
	else if(x<100)
	{
		return(x*add(x-1));
    }
}
