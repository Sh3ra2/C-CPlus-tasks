#include<iostream>
using namespace std;

class stack
{
private:
	int top;
	int arr[5];
	
public:
	
	node()
	{
		top=-1;
		for(int i=0;i<5;i++)
		{
			arr[i]=0;
		}
	}
	bool isempty()
	{
		if(top==-1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool isfull()
	{
		if(top==4)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	int push(int val);
	int pop();
	void count();
	void disp();
};

int stack::push(int val)
{
	if(isfull())
	{
		cout<<"\nStack is full\n";
	}
	else
	{
		top++;
		arr[top]=val;
	}
}

int stack::pop()
{
	if(isempty())
	{
		cout<<"\nStack is Empty\n";
	}
	else
	{
		int popval=arr[top];
		arr[top]=0;
		top--;
	}
}

void stack::disp()
{
	if(isempty())
	{
		cout<<"\nStack is empty\n";
	}
	else
	{
		cout<<"\nelements in stack are:\n";
		for(int i=4;i>=1;i--)
		{
			cout<<arr[i]<<endl;
		}
	}
}

int main()
{
	stack s1;
	int a,b;
	do
	{
		system("cls");
		cout<<"Name: Sheraz Ali\n"
		<<"Roll no: 19101002-204\n"
		<<"Class: BSCS(Grey)3rd Semester\n";
		
		cout<<"\nSelect your choice:\n";
		cout<<"1.Push\n"
		<<"2.Pop\n"
		<<"3.Display\n"
		<<"4.Exit\n"
		<<"-->";
		cin>>a;
		switch(a)
		{
			case 1:
				cout<<"Enter number you would like to enter:";
				cin>>b;
				s1.push(b);
				break;
			case 2:
				s1.pop();
				break;
			case 3:
				s1.disp();
				break;
			case 4:
				exit(0);	
		}
		system("pause");
	}while(a);
}
