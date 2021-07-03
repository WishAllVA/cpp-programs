// There is an infinite set generated as follows:

// 1 is in this set.
// If x is in this set, x⋅a and x+b both are in this set.
// For example, when a=3 and b=6, the five smallest elements of the set are:

// 1,
// 3 (1 is in this set, so 1⋅a=3 is in this set),
// 7 (1 is in this set, so 1+b=7 is in this set),
// 9 (3 is in this set, so 3⋅a=9 is in this set),
// 13 (7 is in this set, so 7+b=13 is in this set).
// Given positive integers a, b, n, determine if n is in this set.

#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main() {
	int t;
	cin>>t;
	while(t--) {
		LL n,a,b;
		int flag=0;
		cin>>n>>a>>b;
		LL st=1;
		if(a==1) {
			if((n-a)%b == 0) {
				cout<<"Yes"<<endl;
			} else cout<<"No"<<endl;
			continue;
		}
		while(1) {
			if(n-st < 0) break;
			if((n-st) % b==0) {
				flag=1;
				break;
			}
			st *= a;
		}
		if(flag==1)
		cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
		}
	
	return 0;
}