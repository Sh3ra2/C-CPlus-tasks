#include<iostream>
using namespace std;

class hod
{
public:
	
	int x=10;
	
	void disp_hod()
	{
		cout<<"Value in x of class hod is "<<x;
	}
};
class teacher
{
public:

	int y=4;	
	
	void disp_teach()
	{
		cout<<"\nValue of x in class teacher is "<<y;
	}
};
class student:public hod,public teacher
{
public:

	void disp_stu()
	{
		cout<<"\nBoth are printed";
	}
};
int main()
{
	student s1;
	s1.disp_hod();
	s1.disp_teach();
	s1.disp_stu();
}
