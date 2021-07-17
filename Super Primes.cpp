#include<iostream>
using namespace std;

#include<bits/stdc++.h>
void sieveOfEranthoses(bool *isPrime,int n)
{
	int count=0,c=0;
	for(int i=2;i<=n;i++)
	{
		isPrime[i]=true;
	}
	for(int i=2;i*i<=n;i++)
	{
		if(isPrime[i]==true)
		{
			for(int j=i*2;j<=n;j+=i)
			{
				isPrime[j]=false;
			}
		}
	}
}

int main()
{
	int n;
	cin>>n;
	bool isPrime[n+1];
	int primes[n+1],j=0;
	sieveOfEranthoses(isPrime,n);
	for(int i=2;i<=n;i++)
	{
		if(isPrime[i])
		{
			primes[j++]=i;
		}
	}
	for(int i=1;i<j;i++)
	{
		if(isPrime[i+1])
		cout<<primes[i]<<" ";
	}
	return 0;
}
