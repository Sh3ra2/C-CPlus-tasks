#include<iostream>
using namespace std;

class father
{
protected:	

	int roll;
	
public:	
	
	int getroll(int x)
	{
		roll=x;
	}
	
	void disproll()
	{
		cout<<"\nYour roll number is "<<roll;
	}

};

class son:public father
{
protected:

	int num1,num2;

public:

	int get(int x, int y)
	{
		num1=x;
		num2=y;
	}
	
	void dispnum()
	{
		cout<<"\n1st numbers are "<<num1
		<<"\n2nd numbers are "<<num2;
	}
};

class gson:public son
{
protected:	
	
	int total;

public:
	
	int disp()
	{
		total=num1+num2;
		disproll();
		dispnum();
		cout<<"\ntotal marks "<<total;
	}
};

int main()
{
	gson g1;
	g1.getroll(333);
	g1.get(22,33);
	g1.father::
}
