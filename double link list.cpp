#include<stdlib.h>
#include <iostream>
using namespace std;
class Node 
{
public:
   int data;
   Node *prev;
   Node *next;
   
   
    Node()
	{
		prev=NULL;
		next=NULL;
		data=0;
	}
	Node(int d)
	{
		data=d;
	}
};

Node* head = NULL;
Node* tail=NULL;

void insert_beg(int newdata) 
{
   Node* newnode = (Node*) malloc(sizeof(Node));
   newnode->data = newdata;
   newnode->prev = NULL;
   newnode->next = head;
   head = newnode;
}          
   
void insert_end(int new_data)
{
   Node* newNode = (Node*)malloc(sizeof(Node));
   Node* tail = head; 
   newNode->data = new_data;
   newNode->next = NULL;
   if (head == NULL) 
   {
		newNode->prev = NULL;
		head = newNode;
    	return;
	}
	else
	{
		while (tail->next != NULL)
		{
			tail=tail->next;
		}
		tail->next = newNode;
		newNode->prev = tail;
	}
}  
   
void display() 
{  
    Node *current = head;  
    if(head == NULL) {  
        cout<<"List is empty\n";  
        return;  
    }  
    cout<<"Adding a node to the end of the list: \n";  
    while(current != NULL) 
	{  
        cout<<current->data<<"-->";  
        current = current->next;  
    }  
    cout<<"\n";  
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
 		
		 cout<<"\n\n1->Insert value at the begining of a double link list"
		<<"\n2->Insert value at the end of a double link list"
		<<"\n3->---Noting Here---"
		<<"\n4->Disaply values in the double link list"
		<<"\n5->exit\n"
 		<<"Enter choice=>>";
 		cin>>choice;
 		switch (choice)
 		{
 			case 1:
 			{
				cout<<"Enter Node data:";
				cin>>value;
				insert_beg(value);
				break;
         	}
 			case 2:
 			{	
 				cout<<"Enter Node data:";
 				cin>>value;
				insert_end(value);
				break;
         	}
 			case 3:
			{  
				cout<<"---Nothing here---";
         		break;
 			}
			case 4:
			{ 
				display();
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
	
}
