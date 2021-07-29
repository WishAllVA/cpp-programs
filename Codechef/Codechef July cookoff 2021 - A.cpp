#include<iostream>
using namespace std;
typedef unsigned long long ULL;
typedef long long LL;

LL gcd(ULL a , ULL b)
{
   if(b==0) return a;
   a%=b;
   return gcd(b,a);
}

int main () {
	ULL T;
	cin>>T;
	while(T--) {
		ULL X,Y;
		cin>>X>>Y;
		if(Y>X) {
			ULL temp = X;
			X = Y;
			Y = temp;
		}
		if(X==1 && Y==1) {
			cout<<2<<endl;
			continue;
		}
		if(Y==1) {
			if(X%2==1) {
				cout<<2<<endl;
			} else {
				cout<<1<<endl;
			}
			continue;
		}
		if(X%Y==0) {
			cout<<0<<endl;
			continue;
		}
		if(X%2==1 && Y%2==1) {
			if(gcd(X,Y) > 1) {
				cout<<0<<endl;
				continue;
			} else if(gcd(X+1,Y) > 1 || gcd(X,Y+1) > 1) {
				cout<<1<<endl;
				continue;	
			} else {
				cout<<2<<endl;
				continue;
			}
		}
		if((X%2==0 && Y%2==1) || (Y%2==0 && X%2==1) ) {
			if(gcd(X,Y) > 1) {
				cout<<0<<endl;
				continue;
			} else if(gcd(X+1,Y) > 1 || gcd(X,Y+1) > 1) {
				cout<<1<<endl;
				continue;	
			} else {
				cout<<2<<endl;
				continue;
			}
		}
		cout<<0<<endl;
	}
	return 0;
}
