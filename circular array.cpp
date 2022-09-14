#include<iostream>
using namespace std;

class queue
{
private:

	int front;
	int rear;
	int arr[5];
	
public:

	queue()
	{
		front= -1;
		rear= -1;
		for(int i=0;i<5;i++)
		{
			arr[i]=0;
		}
	}
	bool isempty()
	{
		if(front==1 && rear==1)
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
		if(rear==4)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void enqueue(int val)
	{
		if(isfull())
		{
			cout<<"\nQueue is full"<<endl;
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
			cout<<"\nQueue is empty"<<endl;
		}
		else if(front==rear)
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
	int count()
	{
		return(rear-front+1);
	}
	void display()
	{
		cout<<"\nAll values in the queue are: "<<endl;
		for(int i=0;i<5;i++)
		{
			cout<<arr[i]<<" ";
		}
	}
};

int main()
{
	queue q1;
	q1.isempty();
	q1.isfull();
	q1.enqueue(3);
	q1.enqueue(4);
	q1.enqueue(5);
	q1.enqueue(6);
	q1.enqueue(7);
	q1.enqueue(8);
	q1.isfull();
	q1.count();
	q1.display();
	q1.dequeue();
	q1.display();
}
