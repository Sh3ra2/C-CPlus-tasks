#include<iostream>
using namespace std;
class B;
class A
{
	int a;
public:
	
	int get_data(int x)
	{
		a=x;
	}
	
	void put_data(void)
	{
		cout<<"value of A is "<<a;
	}
	
	friend int add(A,B);
};

class B
{
	int b;
public:

	int get_data(int x)
	{
		b=x;
	}
	
	void put_data(void)
	{
		cout<<"value of B is "<<b;
	}
	
	friend int add(A,B);
};

int add(A obj1,B obj2)
{
	return(obj1.a+obj2.b);
}

int main()
{
	A obA;
	B obB;
	obA.get_data(4);
	obB.get_data(7);
	obA.put_data();
	obB.put_data();
	
	cout<<"sum:"<<add(obA , obB);
}
