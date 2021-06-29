#include<iostream>
using namespace std;

int merge(int a[],int b[],int c[],int m,int n)
{
	int i=0,j=0,k=0;
	while(i<m && j<n)
	{
		if(a[i]>b[j])
		{
			c[k]=b[j];
			j++;
			k++;
		}
		else
		{
			c[k]=a[i];
			i++;
			k++;
		}
	}
//	if(i==m && j!=n)
//	{
//		while(k!=m+n)
//		c[k++]=b[j++];
//	}
//	if(j==n && i!=m)
//	{
//		while(k!=m+n)
//		c[k++]=a[i++];
//	}
	while(i<m)
	{
		c[k++]=a[i++];
	}
	while(j<n)
	{
		c[k++]=b[j++];
	}
	return *c;
}

int main()
{
	int m,n;
	cout<<"Enter the number of elements of first array\n";
	cin>>m;
	cout<<"Enter the number of elements of second array\n";
	cin>>n;
	int arr1[m],arr2[n];
	int arr3[m+n];
	cout<<"Enter "<<m<<" elements of first sorted array";
	for(int i=0;i<m;i++)
	{
		cin>>arr1[i];
	}
	cout<<"Enter "<<n<<" elements of first sorted array";
	for(int i=0;i<n;i++)
	{
		cin>>arr2[i];
	}
	*arr3=merge(arr1,arr2,arr3,m,n);
	for(int i=0;i<m+n;i++)
	{
		cout<<arr3[i];
	}

}
