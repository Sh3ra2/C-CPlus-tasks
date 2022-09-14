#include<iostream>
using namespace std;
class disp
{
public:
	
	char show(char x)
	{
		cout<<"value is "<<x;
	}
};
int main()
{
	disp p1;
	char a[10];
	cout<<"Enter to display:";
	cin>>a;
	p1.show(a);
}
