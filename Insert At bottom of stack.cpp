#include<iostream>
using namespace std;

struct stack
{
	int arr[1000];
	int top=-1;
	
	void push(int key)
	{
		if(top==1000)
		{
			cout<<"Cannot insert more elements";
			return;
		}
		this->arr[++this->top]=key;
	}
	
	
	int pop()
	{	
		int key;
		if(top==-1)
		{
			cout<<"No elements inside stack";
			return 0;
		}
		key=this->arr[this->top--];
		return key;
	}
	int peek(int top,int key)
{
	if(top==-1)
	{
		cout<<"No elements inside stack";
		return 0;
		
	}
	key=this->arr[this->top];
	return key;
}

void insertionAtBottom(int key)
{
		int x;
		if(top==-1)
		{
			this->push(key);
		}
		else
		{
			x=this->pop();
			this->insertionAtBottom(key);
			this->push(x);	
		}
		
}
}s1;

int main()
{
	int key,c,p,t;
	while(1)
	{
		cout<<"1.Press 1 for push in a stack at the bottom\n Press 2 for pop\n";
		cin>>c;
		cout<<endl;
		switch(c)
		{
			case 1:
				cout<<"Enter an element to insert in a stack at the bottom\n";
				cin>>key;
				cout<<endl;
				s1.insertionAtBottom(key);
				break;
				
			case 2:
				t=s1.pop();
				cout<<t<<endl;
				break;
			case 10:
				return 0;
		}
		
	}
	return 0;
}



