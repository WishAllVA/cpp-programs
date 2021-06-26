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
			cout<<"Cannot add more elements to the stack\n";
			return;
		}
		this->arr[++this->top]=key;
	}
	
	int pop()
	{
		int key;
		if(top==-1)
		{
			//cout<<"No element in the stack to delete\n";
			return 0;
		}
		key=this->arr[this->top--];
		return key;
	}
	int peek()
	{
		int key;
		if(top==-1)
		{
			//cout<<"No element in the stack\n";
			return 0;
		}
		key=this->arr[this->top];
		return key;
	}
}s1;

int main()
{
	int n;
	cout<<"Enter the number of elements you want in array";
	cin>>n;
	int a[n],grt[n],x;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(s1.top==-1)
		{
		s1.push(i);
		}
		else
		{
			if(a[i]<=a[s1.peek()])
			{
			s1.push(i);
			}
			else
			{	
				while(s1.top!=-1)
				{
					if(a[i]>a[s1.peek()])
					{
						x=s1.pop();
						grt[x]=i;
					}
					else break;
				}
				s1.push(i);
				
			}	
		}
	}
	while(s1.top!=-1)
	{	
		int p=s1.pop();
		//cout<<p<<" ";
		grt[p]=-1;
	}
	
	for(int i=0;i<n;i++)
	cout<<grt[i]<<ends;
	return 0;
}
