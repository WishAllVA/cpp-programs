#include<iostream>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		int count=1;
		cin>>n;
		if(n==1)
		{
			cout<<5<<endl;
			continue;
		}
		int i=0;
		for(i=3;;i++)
		{
			int flag=0;
			for(int j=2,l=1;j<=i/2;j=2*l+1,l++)
			{
				if(i%2==0)
				{
					flag=1;
					break;
				}
				if(i%j==0)
				{
					flag=1;
					break;
				}
				
			}
			if(flag==0)
			count++;
			if(count==n)
			break;	
		}
		cout<<i*i+1<<endl;
	}
	return 0;
}
