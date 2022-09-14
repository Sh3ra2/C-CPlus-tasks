#include<iostream>

using namespace std;
class node
{
public:
	
	int data,key;
	node* next;
	
	node()
	{
		key=0;
		data=0;
		next=NULL;
	}
	node(int k,int d)
	{
		key=k;
		data=d;
	}
};

class SLL
{
public:
	
	node *head;
	
	SLL()
	{
		head=NULL;
	}
	
	SLL(node *n)
	{
		head=n;
	}
	
	node* nodeexist(int k)
	{
		node* temp=NULL;
		node* ptr=head;
		while(ptr!=NULL)
		{
			if(ptr->key==k)
			{
				temp=ptr;
			}
			ptr=ptr->next;
		}
		return temp;
	}
	
	void apendnode(node *n)
	{
		if(nodeexist(n->key)!=NULL)
		{
			cout<<"Node already exists with key:"<<n->key<<". Apend other node with different value.\n";
		}
		else
		{
			if(head==NULL)
			{
				head=n;
				cout<<"Node Apendid\n";
			}
			else
			{
				node *ptr=head;
				while(ptr->next!=NULL)
				{
					ptr=ptr->next;
				}
				ptr->next=n;
				cout<<"Node Appendid\n";
			}
		}
	}
	
	void prependnode(node *n)
	{
		if(nodeexist(n->key)!=NULL)
		{
			cout<<"Node already exists"<<n->key<<". Apend another node with different key value\n";
		}
		else
		{
			n->next=head;
			head=n;
			cout<<"Node prepend\n";
		}
	}
	
	int insertnode(int k,node *n)
	{
		node* ptr=nodeexist(k);
		if(ptr==NULL)
		{
			cout<<"Node does not exist with this key value:"<<k<<endl;
		}
		else
		{
			if(nodeexist(n->key)!=NULL)
			{
				cout<<"Node already exist with key value:"<<n->key<<". Append another node with different key value\n";
			}
			else
			{
				n->next=ptr->next;
				ptr->next=n;
				cout<<"Node inserted\n";
			}
		}
	}
	
	void printlist()
	{
		if(head==NULL)
		{
			cout<<"No nodes in singly linked list";
		}
		else
		{
			cout<<"\nSingly linked list values:";
			node* temp=head;
			while(temp!=NULL)
			{
				cout<<"("<<temp->key<<","<<temp->data<<")-->";
				temp=temp->next;
			}
		}
	}
	//Delet node using key
	
	
	//Update node using key

};

int main()
{
	node n1(1,10);
	node n2(2,20);
	node n3(3,30);
	
	
	SLL s(&n1);
	s.apendnode(&n2);
	s.insertnode(1,&n1);
	s.prependnode(&n3);
	s.printlist();
}
