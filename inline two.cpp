#include<iostream>
using namespace std;

inline int add(int x,int y)
{
	int k;
	k=x+y;
	cout<<"Sum is "<<k;
}
int main()
{
	int a=2,b=3;
	add(a,b);
}
