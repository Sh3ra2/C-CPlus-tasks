#include<iostream>
using namespace std;
class parent
{
	int a;
public:
	
	int get(int x)
	{
		a=x;
	}
	
	int put()
	{
		cout<<"Value in a is "<<a;
	}
	
	int add()
	{
		int s,k=10;
		s=a+k;
		cout<<"sum is "<<s;
	}
};
class child:public parent
{
	int b;
public:	
	
	int get(int y)
	{
		b=y;
	}
	
	int add()
	{
		int s,k=100;
		s=b+k;
		cout<<"sum is "<<s;
	}
};
int main()
{
	parent p1;
	p1.get(2);
	p1.add();
	child c1;
	c1.get(3);
	c1.add();
}
