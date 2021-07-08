#include<iostream>
using namespace std;

int gcd(int a,int b)
{
	if(a%b==0)
	{
		return b;
	}
	return gcd(b,a%b);
}

int lcm(int a,int b)
{
	int i=2,j=2;
	int k=a,l=b;
	while(a!=b)
	{
		b=b+l;
		if(b>a)
		{
			a=a+k;
		}
	}
	return b;
}
int main()
{
	int a,b;
	cin>>a>>b;
	int c=a>b?gcd(a,b):gcd(b,a);
	cout<<endl<<"GCD is "<<c;
	int d=a>b?lcm(a,b):lcm(b,a);
	cout<<endl<<"LCM is "<<d;
	return 0;
}
