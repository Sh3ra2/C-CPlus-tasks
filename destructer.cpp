#include<iostream>

using namespace std;

class test
{
	float length;
public:

	float set_length(float len)
	{
		length=len;
	}
	
	float get_legth()
	{
		return length;
	}
	
	test()
	{
		cout<<"Object is created"<<endl;
	}
	
	~test()
	{
		cout<<"object is destroyed"<<endl;
	}
};
int main()
{
	float a;
	test t1;
    cout<<"Enter length:";
    cin>>a;
	t1.set_length(a);
	cout<<"Length of line="<<t1.get_legth()<<endl;
	test t2;
	t2.set_length(3.5);
    cout<<"length in  obj 2="<<t2.get_legth()<<endl;
}
