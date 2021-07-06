#include<iostream>
using namespace std;

void cav(int arr[],int n,int k)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	if(arr[0]==1)
	{
		cout<<1<<endl;
		return;
	}
	for(int i=0;i<n;i++)
	{
		if(k%arr[i]==0)
		{
			cout<<1<<endl;
			return;
		}
	}
	if(n==1)
	{
		cout<<0;
		return;
	}
	for(int i=0;i<n-1;i++)
	{
		int l=1;
		while(1)
		{
			if(k-(l*arr[i])==0)
			{
				cout<<1<<endl;
				cout<<"CHECK";
				return;
			}
			if(k-(l*arr[i])<=arr[i+1])
			{
				break;
			}
			else
			{
				k=k-(l*arr[i]);
			}
		}
	}
	cout<<0<<endl;
	
}

int main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>k;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cav(arr,n,k);
	}
	return 0;
}
