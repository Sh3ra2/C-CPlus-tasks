#include <iostream>
 
using namespace std;
 
// A structure to represent a node.
class Node
{
public:
	int value;
	Node* next;
};
 
// A structure to represent a Head Bucket Node of the bucket list.
class Bucket
{
public:	
					// Pointer to head node of Bucket.
	Node *head;  
};
 
class BucketList
{
public:	
	int db;
	Bucket* array;
};
 
 
// A utility function to create a new node for a particular entry in a bucket.
class Node* newNode(int value)
{
	Node* newnode = new Node;
	newnode->value = value;
	newnode->next = NULL;
	return newnode;
}
 
// A utility function that creates a list of the bucket over the range of input data.
class BucketList* createBucket(int db)
{
	int i;
	BucketList* bl = new BucketList;
 
	bl->db = db;
	bl->array = new Bucket[db];   
 
 
	// Initialize each Bucket list as empty by making head as NULL.
	for(i = 0; i < db; i++)
		bl->array[i].head = NULL;
 
	return bl;
}
 
// A function to Insert the nodes to corresponding Buckets.
void addNode(class BucketList* bl, int bckt, int value)
{
	// Creating new data node.
	Node *newnode = newNode(value);
	Node *temp = new Node;
 
	if(bl->array[bckt].head != NULL)
	{
		temp = bl->array[bckt].head;
 
		// Sorting.
		// If the head node value is lesser than the newnode value, then add node at beginning.
		if(temp->value > newnode->value)
		{
			newnode->next = bl->array[bckt].head;
			bl->array[bckt].head = newnode;
		}
		else
		{
			// Search for the node whose value is more than the newnode value.
			while(temp->next != NULL)
			{
				if((temp->next)->value > newnode->value)
					break;
 
				temp = temp->next;
			}
 
			// Insert newnode after temp node.
			newnode->next = temp->next;
			temp->next = newnode;
		}
	}
	else
	{
		// Assign head of the Bucket as newnode since bucket head is NULL.
		bl->array[bckt].head = newnode;
	}
}
 
// A function to print the result as sorted Data.
void printBuckets(class BucketList *bl)
{
	int db;
	Node* pCrawl = new Node;
 
	for(db = 0; db<bl->db; db++)
	{
		// To view the data in individual bucket remove next line from comment.
		// cout<<"\n\t bucket "<<db+1;
 
		pCrawl = bl->array[db].head;
		while (pCrawl != NULL)
		{
			cout<<"->"<< pCrawl->value;
			pCrawl = pCrawl->next;
		}
	}
}
 
 
int main()
{
	// Create the BucketLists for the data and set 10 as default number of Buckets.
	int db=10, range, NOE, i;
	BucketList* mybucket = createBucket(db);
 	
	cout<<"\n\nEnter the upper limit in the power of 0 to create Bucket: ";
	cin>>range;
 
	// Dividing range into 10 parts so it will have 10 buckets as default.
	range = range/10;
 
	cout<<"\nEnter the number of data element to be sorted: ";
	cin>>NOE;
	int arr[NOE];
 
	for(i = 0; i < NOE; i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>arr[i];
		addNode(mybucket, arr[i]/range, arr[i]);
	}
 
	// Print the adjacency list representation of the BucketList i.e the sorted Output.
	cout<<"\nSorted Data ";
	printBuckets(mybucket);
 
	return 0;
}
