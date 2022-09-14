#include<iostream>

using namespace std;
int  stack[100],n=100,top=-1;

void push(int val)
{
	if(top>=n-1)
	{
		cout<<"Stack Over flow\n";
	}
	else
	{
		top++;
		stack[top]=val;
	}
}
void pop()
{
	if(top<=-1)
	{
		cout<<"Stack Underflow\n";
	}
	else
	{
		cout<<"The popped element is "<<stack[top]<<endl;
		top--;
	}
}
void display()
{
	if(top>=0)
	{
		cout<<"stack elements are \n";
		for(int i=top;i>=0;i++)
		{
			cout<<stack[i]<<" ";
			cout<<endl;
		}
	}
	else 
		{
			cout<<"stack is empty";
		}
}
int main()
{
	int ch,val;
	
	cout<<"1)Push in stack"
	<<"\n2)Pop from stack"
	<<"\n3)Display stack"<<endl;
	cout<<"4)exit\n";
		
	do
	{
		cout<<"Enter choice:\n";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				{
					cout<<"Enter value to be pushed:\n";
					cin>>val;
					push(val);
					break;
				}
			case 2:
				{
					pop();
					break;
				}
			case 3:
				{
					display();
					break;
				}
			case 4:
				{
					cout<<"Exit\n";
					break;
				}
		}
	}while(ch);
	
}
