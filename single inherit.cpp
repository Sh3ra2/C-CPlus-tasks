#include<iostream>
using namespace std;
class A
{
	int a;
public:

	void getval_a(int );
	int get_val();	
};
class B:public A
{
	int b,c;
public:

	void getval_b(int );
	int add();
	void disp();
};

void A::getval_a(int x)
{
	a=x;
}
int A::get_val()
{
	return a;
}

void B::getval_b(int x)
{
	b=x;
}
int B::add()
{
	c=get_val();
	c=c+b;
	cout<<"\nsum in add is="<<c;
}
void B::disp()
{
	cout<<"\nvalue of a="<<get_val();
	cout<<"\nvalue of b="<<b;
	cout<<"\nvalue in c="<<c;
}
int main()
{
	A ob1;
	B ob2;
	ob2.getval_a(8);
	ob2.getval_b(11);
	ob2.add();
	ob2.disp();
}
