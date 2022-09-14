#include<iostream>
using namespace std;

class BstNode
{
public:
	int data; 
	BstNode* left;
	BstNode* right;
};
BstNode* root = NULL;

BstNode* FindMin(BstNode* root)
{
	while(root->left != NULL) 
	{
		root = root->left;
	}
	return root;
}

BstNode* GetNewNode(int data) 
{
	BstNode* newNode = new BstNode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

BstNode* Insert(BstNode* root,int data) 
{
	if(root == NULL) 
	{
		root = GetNewNode(data);
	}
	else if(data <= root->data) 
	{
		root->left = Insert(root->left,data);
	}
	else 
	{
		root->right = Insert(root->right,data);
	}
	return root;
}

bool Search(BstNode* root,int data) 
{	
	if(root == NULL) 
	{
		return false;
	}
	else if(root->data == data) 
	{
		return true;
	}
	else if(data <= root->data) 
	{
		return Search(root->left,data);
	}
	else 
	{
		return Search(root->right,data);
	}
}

BstNode* Delete(BstNode *root, int data) 
{
	if(root == NULL)
	{ 
		return root;
	}
	else if(data < root->data)
	{ 
		root->left = Delete(root->left,data);
	}
	else if (data > root->data)
	{
		root->right = Delete(root->right,data);	
	}

	else 
	{
		
		if(root->left == NULL && root->right == NULL) 
		{ 
			delete root;
			root = NULL;
		}
		 
		else if(root->left == NULL) 
		{
			BstNode *temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL) 
		{
			BstNode *temp = root;
			root = root->left;
			delete temp;
		}
		
		else 
		{ 
			BstNode *temp = FindMin(root->right);
			root->data = temp->data;
			root->right = Delete(root->right,temp->data);
		}
	}
	return root;
}

void Inorder(BstNode *root) 
{
	if(root == NULL) return;
 
	Inorder(root->left);       //Visit left subtree
	cout<<" "<<root->data<<" ";  //Print data
	Inorder(root->right);      // Visit right subtree
}

void Preorder(BstNode *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}
void Postorder(BstNode *root)
{
    if(root==NULL)
    {
        return;
    }
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
} 

int main() 
{
	int ch,val;
	do
	{
		system("cls");
		
		cout<<"\n0)Exit"
		"\n1)Insert"
		<<"\n2)Search"
		<<"\n3)Delete"
		<<"\n4)Inorder Traverse"
		<<"\n5)Pre-order Traverse"
		<<"\n6)Post-order Traverse\n";
		cout<<"Enter choice:-->";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				{
					cout<<"Enter value to be inserted:\n";
					cin>>val;
					root = Insert(root,val);
					cout<<"\nElements in BST is/are:";
            		Inorder(root);
					cout<<"\n";	
					break;
				}
			case 2:
				{
					cout<<"Enter number to be searched:\n";
					cin>>val;
					
					if(Search(root,val) == true) 
					{
						cout<<"Found\n";	
					}
					else 
					{
						cout<<"Not Found\n";
						break;	
					}
					cout<<"Inorder: ";
					Inorder(root);
					cout<<"\n";
				}
			case 3:
				{
					cout<<"Enter number to be Deleted:\n";
					cin>>val;
					root = Delete(root,val);
					cout<<"\nElements in BST is/are:";
            		Inorder(root);
					cout<<"\n";
					break;
				}
			case 4:
				{
					cout<<"Inorder: ";
					Inorder(root);
					cout<<"\n";
					break;
				}
			case 5:
				{
            		cout<<"\nPreorder Traversals is:";
            		Preorder(root);
            		cout<<"\n";
					break;
            	}
        	case 6:
        		{
            		cout<<"\nPostorder Traversals is:";
            		Postorder(root);
            		cout<<"\n";
					break;
            	}	
		}
		system("pause");
	}while(ch);
}
