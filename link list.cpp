#include<stdlib.h>
#include <iostream>
using namespace std;
class Node 
{
public:
   int data;
   Node* next;
};

Node* head = NULL;

Node* insert_beg(int new_data) 
{
    Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}

void insert_last(int val)
{
	Node *newNode = new Node;
    newNode->data= val;
    newNode->next= NULL;
    if(head==NULL)
    {
        head=newNode;
	}
    else
    {
        Node* lastNode = head;
        while(lastNode->next != NULL)
        {
            lastNode = lastNode->next;
        }
        lastNode->next = newNode;
    }
}

void search(int k)
{
	int flag=0;
	Node* temp=head;
	while(temp!=NULL)
	{
		if(temp->data==k)
		{
			cout<<"Value found-->"<<temp->data<<endl;
			flag++;
		}
		temp=temp->next;
	}
	if(flag==0)
	{
		cout<<"\nValue not found\n";
	}
}

void deleteNode(int d)
{
    Node *temp;
    if(head->data == d)
    {
        temp = head;    
    	head = head->next;
        free(temp);
    }
    else
    {
        Node *current  = head;
        while(current->next != NULL)
        {
            if(current->next->data == d)
            {
                temp = current->next;
                current->next = current->next->next;
                free(temp);
                break;
            }
            else
            {
                current = current->next;
            }
        }
    }
}

void insertNodeAtMiddle(int num, int pos)
{
    int i;
    Node *fnNode, *tmp;
    fnNode = (Node*)malloc(sizeof(Node));
    if(fnNode == NULL)
    {
        cout<<" Memory can not be allocated.";
    }
    else
    {
        fnNode->data = num; 
        fnNode->next = NULL;
        
        for(i=2; i<=pos-1; i++)
        {
            tmp = tmp->next;
 
            if(tmp == NULL)
                break;
        }
        if(tmp != NULL)
        {
            fnNode->next = tmp->next;
            tmp->next = fnNode;   
        }
        else
        {
            cout<<" Insert is not possible to the given position.\n";
        }
    }
}

int countNodes() 
{
    Node* temp = head;
    int i = 0;
    while(temp != NULL) 
	{
    	i++;
    	temp = temp->next;
    }
    cout<<"\nThere are "<<i<<" nodes in the link list\n";  
}
 
void display() 
{
   
     Node* ptr;
   	ptr = head;  
    if(ptr== NULL) 
	{  
        cout<<"List is empty\n";  
        return;  
    }  
    cout<<"Elements in the link list are\n";  
    while(ptr != NULL) 
	{  
        cout<<ptr->data<<"-->";  
        ptr = ptr->next;  
    }  
    cout<<"\n";  
}
int main() 
{
   int ch,val,plac;
		
	do
	{
		system("cls");
		cout<<"\t\t\tName: Sheraz Ali\n"
		<<"\t\t\tRoll no: 19101002-204\n"
		<<"\t\t\tClass: BSCS(Grey)3rd Semester\n";
		cout<<"\n1)Insert Node in the Begining"
		<<"\n2)Insert Node at the End"
		<<"\n3)Search Node"
		<<"\n4)Delete Node"
		<<"\n5)Display Nodes"
		<<"\n6)No of nodes"
		<<"\n7)Insert at Mid"
		<<"\n8)Exit\n";
		cout<<"Enter choice:-->";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				{
					cout<<"Enter value to be inserted at the begining:\n";
					cin>>val;
					insert_beg(val);
					break;
				}
			case 2:
				{
					cout<<"Enter value to be inserted at the End:\n";
					cin>>val;
					insert_last(val);
					break;
				}
			case 3:
				{
					cout<<"Enter value you want to search:\n";
					cin>>val;
					search(val);
					break;
				}
			case 4:
				{
					cout<<"Enter value you want to Delete:\n";
					cin>>val;
					deleteNode(val);
					break;
				}
				
			case 5:
				{
					display();
					break;
				}
				
			case 6:
				{
					countNodes();
					break;
				}
			case 7:
				{
					cout<<"Enter value you want to insert after:\n";
					cin>>val;
					cout<<"Enter value you want to insert after:\n";
					cin>>plac;
					insertNodeAtMiddle(val,plac);
					break;
				}			
			case 8:
				{
					cout<<"Exit\n";
					break;
				}
		}
		system("pause");
	}while(ch);
}
