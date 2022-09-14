#include <iostream> 
using namespace std; 
  
class Node
{ 
public: 
    int data; 
    Node* next; 
}; 
  
void push(Node** head_ref, int new_data) 
{ 
    Node* new_node = new Node(); 
    new_node->data = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref) = new_node; 
} 
 

void deleteNode(Node **head_ref, int pos)
{
    //
   if (*head_ref == NULL)
   {
      return;
   }
   //temp to store head
	Node* temp = *head_ref;
   //Delete head node
    if (pos == 0)
    {
        *head_ref = temp->next; 
        temp=0;               
        return;
    }
    //store previous of to be deleted node
    for (int i=0; temp!=NULL && i<pos-1; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL)
    {
        return;
    }
    //delete node at pos (next of pos-1)
    Node *next = temp->next->next;
    (temp->next)=0;  
    temp->next = next; 
} 
  
  
void printList(Node* node) 
{
    while (node != NULL)  
    { 
        cout << node->data << " "; 
        node = node->next; 
    } 
}
  
int main() 
{ 
    int a[6],k,d;  
    Node* head = NULL; 
    
    cout<<"Name: Seraz Ali\n"
	<<"Roll no: 19101002-204\n"
	<<"Class: BSCS(Grey)3rd semester\n";
    
    cout<<"Enter 6 Values:\n";
    
    cout<<"Enter values:\n";
    
	for(int i=0;i<5;i++)
	{
		cin>>a[k];
		push(&head,a[k]);
	}
    
	puts("Created Linked List: "); 
    printList(head); 
  	
  	cout<<"\nEnter value number you would like to delete";
  	cin>>d;
    deleteNode(&head,d);
    
    puts("\nLinked List after Deletion of 3: "); 
      
    printList(head); 
       
    return 0; 
} 
