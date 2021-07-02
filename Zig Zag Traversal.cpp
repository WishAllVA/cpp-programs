#include<iostream>
using namespace std;



int main()
{
	int m,n,i,j,flag=0;
	cin>>m>>n;
	int arr[m][n];
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<arr[0][0]<<" ";
	i=0;j=0;
	while(1)
	{
		if(flag==0 && j!=n-1)
		{
			cout<<arr[i][++j]<<" ";
			while(j>0 && i!=m-1)
			{			
				cout<<arr[i+1][j-1]<<" ";
				i++;
				j--;
			}
			flag=1;	
		}
		else if(flag==0 && j==n-1)
		{
			cout<<arr[++i][j]<<" ";
			while(j>0 && i!=m-1)
			{			
				cout<<arr[i+1][j-1]<<" ";
				i++;
				j--;
			}
			flag=1;	
		}
		else if(flag==1 && i!=m-1)
		{
			cout<<arr[++i][j]<<" ";
			if(i==m-1 && j==n-1)
			break;
			while(i>0 && j!=n-1)
			{			
				cout<<arr[i-1][j+1]<<" ";
				i--;
				j++;
			}
			flag=0;
		}
		else if(i==m-1 && flag==1)
		{
			cout<<arr[i][++j]<<" ";
			if(i==m-1 && j==n-1)
			break;
			while(i>0 && j!=n-1)
			{			
				cout<<arr[i-1][j+1]<<" ";
				i--;
				j++;
			}
			flag=0;	
		}
		if(i==m-1 && j==n-1)
			break;
	}
}
