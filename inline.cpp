#include<iostream>
using namespace std;
inline int max(int x, int y)
{
	return((x>y)?x:y);
}
int main()
{
	int a,b;
	cout<<"enter first value=";
	cin>>a;
	cout<<"enter secound value=";
	cin>>b;
	cout<<"max value is "<<max(a,b);
}
