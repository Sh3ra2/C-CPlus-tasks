#include<iostream>
using namespace std;

class queu
{
public:

	int queue[5], front= -1, rear= -1;
	
	void enque(int x)
	{
		if(front==-1 && rear==-1)
		{
			front=rear=0;
			queue[rear]=x;
		}
		else if(((rear+1)%5)==front)
		{
			cout<<"Queue is full";
		}
		else
		{
			rear=(rear+1)%5;
			queue[rear]=x;
		}
	}
	
	void dequeue()
	{
		if(front==-1 && rear==-1)
		{
			front=rear=0;
			cout<<"Queue is empty";
		}
		else if(front==rear)
		{
			cout<<"Dequeued element is "<<queue[front];
			front=rear=-1;
		}
		else
		{
			cout<<"Dequed element is "<<queue[front];
			front=(front+1)%5;
		}
	}
	void display()
	{
		int i;
		if(front==-1 && rear==-1)
		{
			cout<<"Queue is full";
		}
		else
		{
			cout<<"Elements in queue are:\n";
			while(i!=rear)
			{
				cout<<" "<<queue[i];
				i=(i+1)%5;
			}
		}
	}
};

int main()
{
	queu q1;
	q1.enque(11);
	q1.display();
	q1.dequeue();
	q1.display();
}
