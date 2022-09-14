#include<iostream>

using namespace std;

class test
{
private:
	int a,b;
public:	
	
	test(int i,int u)
	{
		a=i;
		b=u;
	}
	
	test(const test &t1)
	{
		a=t1.a;
		b=t1.b;
	}
	auto
	void disp()
	{
		cout<<"\nValue in a is "<<a
		<<"\nValue in b is "<<b;
	}
};
int main()
{
	test t1(3,4);
	t1.disp();
	cout<<"\nObject nmb 2";
	test t2(t1);
	t2.disp();
}
