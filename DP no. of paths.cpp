#include<iostream>
using namespace std;

int main()
{
	int n,m,i,j;
	cin>>n;
	cin>>m;
	int dp[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(j==0 || i==0)
			dp[i][j]=1;
			else
			dp[i][j]=dp[i-1][j]+dp[i][j-1];
		}
	}
	cout<<dp[i][j];
}
