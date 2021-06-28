#include<iostream>
#include<math.h>
using namespace std;


struct Node{
	int data;
	Node* next;
};
Node *root = NULL;


Node* getNewNode(int data)
{
	Node* newNodePtr = new Node;
	newNodePtr->data = data;
	newNodePtr->next = NULL;
	return newNodePtr;
}

void insert(int data)
{
	Node* newNode;
	newNode = getNewNode(data);
		if(root == NULL)
		{
			root = newNode;
		}
		else
		{
		 Node* traversal = root;
		while(traversal->next!=NULL)
		{
			traversal = traversal->next;
		}
		traversal->next = newNode;
		}		
}

int length()
{
	int len=0;
	Node* ptr=root;
	while(ptr!=NULL)
	{
		len++;
		ptr=ptr->next;	
	} 
	return len;
}
int main(){
	int choice, data;
	cout<<"Choose an operation";
	while(true){
		cout<<"\n\n 1.Insert    2.Print Length:  ";
		cin>>choice;
		switch(choice){
			
			case 1:
				cout<<"\nEnter data :  ";
				cin>>data;
				insert(data);
				break; 
			case 2:
				cout<<"\nLength of Linked List : ";
				cout<<length();
				break;
		}
	}
	return 0;
}
