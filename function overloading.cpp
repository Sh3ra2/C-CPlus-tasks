#include<iostream>
using namespace std;

class test
{
	int a,b,c;
public:w
	
	int calc(int x);
	int calc(int x,int y);
	int calc(int x,int y,int z);
};
int test::calc(int x)
{
	cout<<"\nValue in t1 is "<<x;
}
int test::calc(int x,int y)
{
	cout<<"\nValue of A in t2 is "<<x
	<<"\nValue of B in t2 is "<<y;
}
int test::calc(int x,int y,int z)
{
	cout<<"\nValue of A in t3 is "<<x
	<<"\nValue of B in t3 is "<<y
	<<"\nValue of c in t3 is "<<z;
}
int main()
{
	test t1;
	t1.calc(3);
	t1.calc(4,5);
	t1.calc(6,7,8);
}
