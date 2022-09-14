#include <iostream>
using namespace std;

class Node
{
public:	
	int data;
	Node *link;
};

Node *top = NULL;

bool isempty()
{
 	if(top == NULL)
 	{
 		return true;
	}
	else
	{
 		return false;
 	}
}

void push (int value)
{
  	Node *ptr = new Node();
  	ptr->data = value;
  	ptr->link = top;
  	top = ptr;
}

void pop ()
{
 	if(isempty())
 	{
  		cout<<"Stack is Empty";
 	}
	else
 	{
  		Node *ptr = top;
  		top = top -> link;
  		delete(ptr);
 	}
}

void showTop()
{
 	if (isempty())
 	{
  		cout<<"Stack is Empty";
 	}
	else
	{
 		cout<<"Element at top is : "<< top->data;
 	}
}

void displayStack()
{
 	if(isempty())
  		cout<<"Stack is Empty";
 	else
 	{
 		cout<<"Values In Stack Are:\n";
  		Node *temp=top;
  		while(temp!=NULL)
  		{
			cout<<temp->data<<"\n";
   			temp=temp->link;
  		}
  		cout<<"\n";
 	}
 }

int main()
{
	int choice, value;
	do
	{
		system("cls");
		cout<<"\t\t\tName: Sheraz Ali\n"
		<<"\t\t\tRoll no: 19101002-204\n"
		<<"\t\t\tClass: BSCS(Grey)3rd Semester";
		cout<<"\n1->Push \n2->Pop \n3->showTop \n4->displayStack \n5->exit\n"
		<<"Enter choice=>>";
		cin>>choice;
		switch (choice)
		{
			case 1:
			{
				cout<<"Enter Value:-->\n";
         		cin>>value;
         		push(value);
         		break;
         	}
 			case 2:
 			{	
				pop();
         		break;
         	}
 			case 3:
			{  
				showTop();
         		break;
 			}
			case 4:
			{ 
				displayStack();
         		break;
         	}
 			case 5:
			{ 
				exit(0);
         		break;
         	}
 		}
 		system("pause");
 	}while(choice);
	return 0;
}
