#include<iostream>

using namespace std;

class test
{
	int a,b;
public:	
	
	int get_data(int x,int y)
	{
		a=x;
		b=y;
	}
	void put_data(void)
	{
		cout<<"\nValue in A is "<<a
		<<"\nValue in B is "<<b;
	}
	int sum(test,test);
};
int test::sum(test t1,test t2)
{
	int A,B;
	A=t1.a+t2.a;
	cout<<"\nSum of A values is "<<A;
	B=t1.b+t2.b;
	cout<<"\nSum of B values is "<<B;
}
int main()
{
	test t1,t2,t3;
	t1.get_data(20,100);
	t1.put_data();
	t2.get_data(20,200);
	t2.put_data();
	t3.sum(t1,t2);
}
