#include<iostream>
using namespace std;
class grade
{
public:
	
	float got(float x)
	{
		if(x>=90 && x<=100)
		{
			cout<<"Grade A+";
		}
		else if(x>=85 && x<=89.99)
		{
			cout<<"Grade A";
		}
		else if(x>=80 && x<=84.99)
		{
			cout<<"Grade A-";
		}
		else if(x>=75 && x<=79.99)
		{
			cout<<"Grade B+";
		}
		else if(x>=70 && x<=74.99)
		{
			cout<<"Grade B";
		}
		else if(x>=65 && x<=69.99)
		{
			cout<<"Grade B-";
		}
		else if(x>=60 && x<=64.99)
		{
			cout<<"Grade C+";
		}
		else if(x>=55 && x<=59.99)
		{
			cout<<"Grade C";
		}
		else if(x>=50 && x<=54.99)
		{
			cout<<"Grade C-";
		}
		else if(x>=1 && x<=49.99)
		{
			cout<<"Grade F";
		}
		else
		{
			cout<<"Enter number from 1 to 100";
		}
	}
};
int main()
{
	grade te;
	float a;
	cout<<"Enter percentage of numbers:";
	cin>>a;
	te.got(a);
}
