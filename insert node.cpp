#include <iostream> 
using namespace std; 
  
class Node 
{ 
public:
    int data; 
    Node* next; 
}; 
  
int size = 0; 
  
Node* getNode(int data) 
{ 
    Node* newNode = new Node(); 
  
    newNode->data = data; 
    newNode->next = NULL; 
    return newNode; 
} 
  
void insertPos(Node** current, int pos, int data) 
{ 
    if (pos < 0 || pos > size + 1) 
        cout << "Invalid position!" << endl; 
    else 
	{ 
  
        while (pos--) 
		{ 
  
            if (pos == 0) 
			{ 
  
                Node* temp = getNode(data); 
  
                temp->next = *current; 
                *current = temp; 
            } 
            else
              current = &(*current)->next; 
        } 
        size++; 
    } 
} 
  
void printList(struct Node* head) 
{ 
    while (head != NULL) 
	{ 
        cout << " " << head->data; 
        head = head->next; 
    } 
    cout << endl; 
} 
  
int main() 
{ 
    Node* head = NULL; 
    cout<<"enter values";
    int a,b,c,d;
    cout<<"enter values";
    cin>>a>>b>>c>>d;
    head = getNode(a); 
    head->next = getNode(b); 
    head->next->next = getNode(c); 
    head->next->next->next = getNode(d); 
  
    size = 4; 
  
    cout << "Linked list before insertion: "; 
    printList(head); 
  
    int data = 12, pos = 3; 
    insertPos(&head, pos, data); 
    cout << "Linked list after insertion of 12 at position 3: "; 
    printList(head); 
  
    data = 1, pos = 1; 
    insertPos(&head, pos, data); 
    cout << "Linked list after insertion of 1 at position 1: "; 
    printList(head); 
  
    data = 15, pos = 7; 
    insertPos(&head, pos, data); 
    cout << "Linked list after insertion of 15 at position 7: "; 
    printList(head); 
  
    return 0; 
}
