#include<iostream>
using namespace std;
class def
{
	int a,b;
public:
	
	int get(int x=2, int y=4)
	{
		a=x;
		b=y;
	}
		
	void disp()
	{
		cout<<"Values in a is "<<a
		<<"\nValue in b is "<<b;
	}
};
int main()
{
	def d1;
	d1.get();
	d1.disp();
}
