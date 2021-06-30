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
	
}s1,s2;




int main()
{
	int key,c,p,t;
	while(1)
	{
		cout<<"1.Press 1 for push\n2 for pop\n";
		cin>>c;
		
		switch(c)
		{
			case 1:
				cout<<"Enter an element to insert in a queue\n";
				cin>>key;
				s1.push(key);
				break;
				
			case 2:
				while(s1.top!=-1)
				{
					p=s1.pop();
					s2.push(p);
					
				}
				t=s2.pop();
				while(s2.top!=-1)
				{
					p=s2.pop();
					s1.push(p);
				}
				cout<<t<<endl;
				break;
				case 10:
					return 0;
		}
		
	}
	return 0;
}
