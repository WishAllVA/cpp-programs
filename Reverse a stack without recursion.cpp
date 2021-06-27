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
	
	
}s1;

stack reverse(stack s1)
{
	int t;
	stack s2,s3;
	while(s1.top!=-1)
	{
		t=s1.pop();
		s2.push(t);
	}
	while(s2.top!=-1)
	{
		t=s2.pop();
		s3.push(t);
	}
	while(s3.top!=-1)
	{
		t=s3.pop();
		s1.push(t);
	}
	return s1;
}

int main()
{
	int key,c,p,t;
	while(1)
	{
		cout<<"1.Press 1 for push in a stack at the bottom\n Press 2 for pop\n3.Reverse the stack\n";
		cin>>c;
		cout<<endl;
		switch(c)
		{
			case 1:
				cout<<"Enter an element to insert in a queue\n";
				cin>>key;
				s1.push(key);
				break;
				
			case 2:
				t=s1.pop();
				cout<<t<<endl;
				break;
				
			case 3:
				s1=reverse(s1);
				break;
				
			case 10:
				return 0;
		}
		
	}
	return 0;
}
