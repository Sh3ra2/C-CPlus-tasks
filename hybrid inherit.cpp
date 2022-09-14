#include<iostream>
using namespace std;

class student
{
protected:

	int roll;

public:

	int get_roll(int x)
	{
		roll=x;
	}
	
	void disp_roll()
	{
		cout<<"\nRoll num:"<<roll;
	}
};
class marks:public student
{
protected:

	int mark1,mark2;
	
public:

	int get_marks(int x,int y)
	{
		mark1=x;
		mark2=y;
	}
	
	void disp_marks()
	{
		cout<<"\nSubject 1 marks are "<<mark1
		<<"\nSubject 2 marks are "<<mark2;
	}
};
class sports
{
protected:

	int spm;
	
public:

	int get_spm(int x)
	{
		spm=x;
	}
	
	void disp_spm()
	{
		cout<<"\nMarks in sports are "<<spm;
	}
};
class result:public marks,public sports
{
protected:
	
	int total;
	
public:

	int sum()
	{
		total=spm+mark1+mark2;
	}
	
	void disp_sum()
	{
		disp_roll();
		disp_marks();
		disp_spm();
		cout<<"\nTotal marks are "<<total;
	}
};
int main()
{
	result r1;
	r1.get_roll(1234);
	r1.disp_roll();
	r1.get_marks(20,40);
	r1.disp_marks();
	r1.get_spm(30);
	r1.disp_spm();
	r1.sum();
	r1.disp_sum();
}
