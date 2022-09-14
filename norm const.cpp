#include<iostream>
using namespace std;
class cons
{
	int a,b;
public:
	
	cons()
	{
		a=7;
		b=4;
	}
	
	int disp(void)
	{
		cout<<""<<a;
		cout<<""<<b;
	}
};
int main()
{
	cons c1;
	c1.disp();
}
