#include<iostream>
using namespace std;

int binSearch(int arr[],int s,int e,int k)
{
	while(s<=e)
	{
	int mid=(s+e)/2;
	if(arr[mid]>k)
	return binSearch(arr,s,mid-1,k);
	else if(arr[mid]<k)
	return binSearch(arr,mid+1,e,k);
	else
	{
	cout<<mid+1;
	return 0;
	}
	}
	cout<<"No element";
	return 0;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int k;
	cin>>k;
	binSearch(arr,0,n-1,k);
	return 0;
}
