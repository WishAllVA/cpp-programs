#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int gs=-32000,stl=0;
	for(int i=0;i<n;i++)
	{
		stl=stl+arr[i];
		if(stl>gs)
		{
			gs=stl;
		}
		if(stl<0)
		stl=0;
	}
	cout<<gs<<endl;
	cout<<a;
	

	return 0;
}
