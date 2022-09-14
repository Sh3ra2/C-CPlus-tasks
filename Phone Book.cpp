#include <bits/stdc++.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

vector<string> names;

class Node 
{
public:
	
    long long int data;
    string name;
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
   
void insert_end()
{
    Node* newNode = new Node;
    Node* tail = head; 
    cout<<"\nEnter your number: ";
    cin>>newNode->data;
	cout<<"Enter your name: ";
    cin>>newNode->name;
	names.push_back(newNode->name);
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
 
void searchs()
{
	int flag=0;
	string inp;
	cout<<"Enter Contact Name To Search: ";
	cin>>inp;
	Node* temp=head;
	while(temp!=NULL)
	{
		if(temp->name==inp)
		{
			cout<<"Contact Found-->"<<temp->name<<"\t"<<temp->data<<endl;
			flag++;
		}
		temp=temp->next;
	}
	if(flag==0)
	{
		cout<<"\n---Contact Not Found---\n";
	}
}

void searchn()
{
	int flag=0;
	string inp;
	cout<<"Enter Contact Number To Search: ";
	cin>>inp;
	Node* temp=head;
	while(temp!=NULL)
	{
		if(temp->name==inp)
		{
			cout<<"Contact Found-->"<<temp->name<<"\t"<<temp->data<<endl;
			flag++;
		}
		temp=temp->next;
	}
	if(flag==0)
	{
		cout<<"\n---Contact Not Found---\n";
	}
} 
   
void display() 
{  
    Node *current = head;  
    if(head == NULL) 
	{  
        cout<<"\n---No Contacts---\n";  
        return;  
    }   
    while(current != NULL) 
	{  
        cout<<current->data<<" "<<current->name<<"-->";  
        current = current->next;  
    }  
    cout<<"\n";  
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
    cout<<"\nYou have "<<i<<" contacts\n";
	return i;  
}

void deleteNode()
{
	string n;
	cout<<"Enter Contact Name You Want To Delete: ";
	cin>>n;
    Node *temp;
    if(head->name == n)
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
            if(current->next->name == n)
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

void deleteNoden()
{
	int n;
	cout<<"Enter Contact Number You Want To Delete: ";
	cin>>n;
    Node *temp;
    if(head->data == n)
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
            if(current->next->data == n)
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

// The whole three functions are for alphabetical order
void print(vector<string> names)			//for printing in order
{
	for(int i=0;i<names.size();i++)
	{
		cout<<i+1<<"."<<names[i]<<endl;
	}
	printf("\n");
}
bool mycomp(string a, string b)			//For checking the order
{
	return a<b;
}
vector<string> alphabaticallySort(vector<string> a)	//for sorting
{
	int n=a.size();
	sort(a.begin(),a.end(),mycomp);
	return a;
}

void update_data() 
{
   string old;
   int n;
   cout<<"\nEnter number you want to modify: ";
   cin>>old;
   
   if(head == NULL) 
   {
      cout<<"\nLinked List is empty\n";
      return;
   } 

   Node *current = head;
   while(current!=NULL) 
   {
      if(current->name == old) 
	  	{
	  		cout<<"Enter New Number: ";
	  		cin>>n;
         	current->data = n;
         
         	cout<<"Old Number of "<<old<<"has been updated"
			<<"\nNew Number: "<<n;
         	return;
      }

      if(current->next != NULL)
      {
      		 current = current->next;
	  }
      else
         break;
   }
   cout<<"Contact not found\n";
}

int main() 
{
	int choice, value;
	
    do
	{
		system("cls");
		cout<<"\t\t\t--------------------------------------\n\t\t\t";
		cout<<"\tWELCOME TO PHONE BOOK\n\t\t\t";
		cout<<"--------------------------------------\n\t\t\t";
		cout<<"      Enter number of your choice\n\t\t\t";
		cout<<"\n\t\t\t\t<<------0.Go Back-----\n\t\t\t";
	    
		cout<<"\n\t\t\t||1->Add New Contact"
		<<"\n\t\t\t||2->Search Contact"
		<<"\n\t\t\t||3->Display Contacts In The Double Link List"
		<<"\n\t\t\t||4->Count Contacts"
		<<"\n\t\t\t||5->Delete Contact"
		<<"\n\t\t\t||6->Show Contacts"
		<<"\n\t\t\t||7->Update Contact"
	    <<"\n\t\t\t||===>";
	    cin>>choice;
		switch (choice)
		{
			case 1:
			{	
				insert_end();
				break;
        	}
			case 2:
			{
				cout<<"\n1.Search By Name: "
				<<"\n2.Search By Number: "
				<<"\nEnter Choice->";
				cin>>value;
				if(value==1)
				{
					searchs();
				}  
				else if(value==2)
				{
					searchn();
				}
				else
				{
					cout<<"\n---Choose A Valid Option---\n";
				}
        		break;
			}
			case 3:
			{ 
				display();
        		break;
        	}
        	case 4:
			{ 
				countNodes();
        		break;
        	}
        	case 5:
			{
				
				cout<<"\n1.Delete Node With Name: "
				<<"\n2.Delete Node With Number: "
				<<"\nEnter Choice->";
				cin>>value;
				if(value==1)
				{
					deleteNode();
				}  
				else if(value==2)
				{
					deleteNoden();
				}
				else
				{
					cout<<"\n---Choose A Valid Option---\n";
				}
				break;
			}
			case 6:
			{ 
				names=alphabaticallySort(names);
				cout<<"\nIn Alphabetical Order:\n";
				print(names);
				break;
        	}
        	case 7:
			{ 
				update_data();
				break;
        	}
			case 8:
			{ 
				exit(0);
        		break;
        	}
		}
		system("pause");
	}while(choice);
}
