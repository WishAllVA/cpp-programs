
#include<iostream>
#include<stack>
using namespace std;



struct node
{
	int data;
	struct node *left,*right;
};


node* getNewNode(int data)
{
	node* newNode=new node;
	newNode->data=data;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}

/*inserting a new node in the bst using recursion*/
node* insertUsingRecursion(node* root,int data)
{
	if(!root)
	root=getNewNode(data);
	else
	{
	if(data<root->data)
	{
		root->left=insertUsingRecursion(root->left,data);
	}
	if(data>=root->data)
	{
		root->right=insertUsingRecursion(root->right,data);
	}
	}
	return root;
}


/*inserting a new node in the bst using iteration*/
node* insertUsingLoop(node*root,int data)
{
	if(!root)
	root=getNewNode(data);
	else
	{
		node* root=root;
		if(data<root->data)
		{
		  if(root->left)
		  root=root->left;
		  else
		  root->left=getNewNode(data);
		}
		if(data>=root->data)
		{
		  if(root->right)
		  root=root->right;
		  else
		  root->right=getNewNode(data);
		}
	}
	return root;
}

/*Minimum value of the tree is obtained*/
node*minValue(node *root)
{
	while(!root->left)
	root=root->left;
	return root;
}

/* Pre-Order Traversal of tree*/
void preOrder(node *root)
{
	node* ptr=root;
	stack<node *>preStack;
	preStack.push(NULL);
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"\t";
		if(ptr->right)
		preStack.push(ptr->right);
		if(ptr->left)
		ptr=ptr->left;
		else
		{
		ptr=preStack.top();
		preStack.pop();
		}
	}
}

/* In-Order Traversal*/
void inOrder(node *root)
{
	node* ptr=root;
	stack<node *>inStack;
	//inStack.push(NULL);
	bool done=0;
	while(!done)
	{
		if(ptr!=NULL)
		{
			inStack.push(ptr);
			ptr=ptr->left;
		}
		else
		{
			if(!inStack.empty())
			{
				ptr=inStack.top();
				inStack.pop();
				cout<<ptr->data<<"\t";
				ptr=ptr->right;
			}
			else
			done=1;
			
		}
	}	
	cout<<"check";
}
/*Post-Order Traversal*/
void postOrder(node *root)
{
	node*ptr=new node;
	stack<node *>postStack1;
	stack<node *>postStack2;
	//postStack1.push(NULL);
	postStack1.push(root);
	while(!postStack1.empty())
	{	
		ptr=postStack1.top();
		postStack1.pop();
		if(ptr->left)
		postStack1.push(ptr->left);
		if(ptr->right)
		postStack1.push(ptr->right);
		postStack2.push(ptr);
	}
	while(!postStack2.empty())
	{
		ptr=postStack2.top();
		cout<<ptr->data<"\t" ;
		postStack2.pop();
	}
}


/*Delete a node by giving the key/value */
node *deleteNode(node* root,int data)
{
	if(root == NULL)
	{
		return root;
	}
	else if(root->data>data)
	{
		root->left=deleteNode(root->left,data);
	}
	else if(root->data<data)
	{
		root->right=deleteNode(root->right,data);
	}
	else
	{
		if(root->left==NULL)
		{
			node *temp=root->right;
			root->right = NULL;
			delete root;
			return temp;
		}
		else if(root->right==NULL)
		{
			node *temp=root->left;
			delete root;
			return temp;
		}
		node* temp=minValue(root->right);
		root->data=temp->data;
		root->right = deleteNode(root->right, temp->data);
	}
	return root;
}

void display(node* root)
{
	if(root==NULL)
	return;
	
	display(root->left);
	cout<<root->data<<"\n";
	display(root->right);
	
}
int main()
{
	node *root=NULL;
	int n;
	while(1)
	{
		cout<<"\nChoose an option\n1.Insert an Element in a tree\n2.Delete an element from a tree\n3.Display the tree\n4.Pre-Order Traversal\n";
		cout<<"5.In-Order Traversal\n6.Post-Order Traversal";
		cin>>n;
		switch(n)
		{
			case 1:
				int e;
				cout<<"Insert the data\n";
				cin>>e;
				root=insertUsingRecursion(root,e);
				//root=insertUsingLoop(root,e);
				break;
			case 2:
				cout<<"Enter the value to be deleted\n";
				int d;
				cin>>d;
				root=deleteNode(root,d);
				break;
			case 3:
				display(root);
				break;
			case 4:
				preOrder(root);
				break;
			case 5:
				inOrder(root);
				break;
			case 6:
				postOrder(root);
				break;
			case 10:
				return 0;
		}
	}
}
