#include<iostream>
using namespace std;
void reverse(int a[],int n)
{
	int i;
	//if(n%2==0)
	for(i=0;i<n/2;i++)
	{
		a[i]=a[i]+a[n-i-1];
		a[n-i-1]=a[i]-a[n-i-1];
		a[i]=a[i]-a[n-i-1];
	}
//	else
//	for(i=0;i<(n-1)/2;i++)
//	{
//		a[i]=a[i]+a[i-n-1];
//		a[i-n-1]=a[i]-a[i-n-1];
//		a[i]=a[i]-a[i-n-1];
//	}
}
main()
{
	int n;
	cout<<"Enter the number of elements";
	cin>>n;
	int a[n];
	cout<<"Enter the elements";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\n";
	reverse(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	
	return 0;
}
