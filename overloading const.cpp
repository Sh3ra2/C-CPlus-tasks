#include<iostream>
using namespace std;

class test
{
private:	
	int a,b;
public:
	
	test()
	{
		int x=5,y=2;
		a=x;
		b=y;
	}
	test(int x)
	{
		a=b=x;
	}
	test(int x, int y)
	{
		a=x;
		b=y;
	}
	
	void disp()
	{
		cout<<"\nValue in a is "<<a
		<<"\nValue in b is"<<b;
	}
	
};
int main()
{
	test A;
	test t2(2);
	test t3(3,4);
	A.disp();
	t2.disp();
	t3.disp();
}
