#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main()
{
	int ans=0;
	map<int,int>m;
	map<int,int>:: iterator it;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	m[0]=-1;
	for(int i=0;i<n;i++)
	{
		it=m.find(arr[i]);
		if(it ==m.end())
		{
			m[arr[i]]=i;
		}
		else
		{
			if(m.find(arr[i])->second >ans)
			ans=i-m.find(m[arr[i]])->second;
		}
	}
	cout<<ans;
}
