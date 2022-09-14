#include<iostream>

using namespace std;

class test
{
private:	
	int x;
public:	
	
	test()
	{
		int a=5;
		x=a;
	}
	
	void disp()
	{
		cout<<"Value in x is "<<x;
	}
};
int main()
{
	test t1;
	t1.disp();
}
