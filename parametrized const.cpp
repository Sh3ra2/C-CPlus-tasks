#include<iostream>

using namespace std;

class test
{
private:
	int a,b;
public:
	
	test(int x,int y)
	{
		a=x;
		b=y;
	}
	
	void disp()
	{
		cout<<"Value in A is "<<a
		<<"\nValue in B is "<<b;
	}
};
int main()
{
	test t1(4,5);
	t1.disp();
}
