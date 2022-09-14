#include<iostream>
using namespace std;

class queue
{
private:
	
	int front,rear,arr[6];

public:
	
	queue()
	{
		front=-1;
		rear=-1;
		for(int i=0;i<6;i++)
		{
			arr[i]=0;
		}
	}
	
	bool isempty()
	{
		if(front==-1 && rear==-1)
			return true;
		else
			return false;
	}
	
	bool isfull()
	{
		if(rear==5)
			return true;
		else
			return false;
	}
	
	int enqueue(int val)
	{
		if(isfull())
		{
			cout<<"\nQueue is full\n";
		}
		else if(isempty())
		{
			rear=0;
			front=0;
			arr[rear]=val;
		}
		else
		{
			rear++;
			arr[rear]=val;
		}
	}
	
	int dequeue()
	{
		int x;
		if(isempty())
		{
			cout<<"\nStack is empty\n";
		}
		else if (front==rear)
		{
			x=arr[front];
			arr[front]=0;
			rear=-1;
			front=-1;
			return x;
		}
		else
		{
			x=arr[front];
			arr[front]=0;
			front++;
			return x;
		}
	}
	
	void display()
	{
		cout<<"Elements in queue are:\n";
		for(int i=0;i<6;i++)
		{
			cout<<arr[i]<<endl;
		}
	}
	
};

int main()
{
	queue q1;
	int a,b;
	
	do
	{
		system("cls");
		cout<<"\nSelect :\n";
		cout<<"1.Enter element\n"
		<<"2.Display\n"
		<<"3.Remove element\n"
		<<"-->";
		cin>>a;
		switch(a)
		{
			case 1:
				cout<<"Enter number you would like to enter:";
				cin>>b;
				q1.enqueue(b);
				break;
				
			case 2:
				q1.display();
				break;
				
			case 3:
				q1.dequeue();
				break;	
		}
		system("pause");
	}while(a);
}
