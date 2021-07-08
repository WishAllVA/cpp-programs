#include<iostream>
using namespace std;

void printsets(int a[],int n,int b[],int m,int i)
{
		if(i==n)
		{
			for(int j=1;j<=i;j++)
			{
				cout<<b[j]<<"\t";
			}
			cout<<"\n";
		}
		printsets(a,n,b,m+1,i+1);
		printsets(a,n,b,m,i+1);
}

int main()
{
	int a[4]={1,2,3,4};
	int b[4];
	printsets(a,4,b,0,1);
	return 0;
}
