// You are given a multiset (i. e. a set that can contain multiple equal integers) containing 2n integers.
// Determine if you can split it into exactly n pairs (i. e. each element should be in exactly one pair)
// so that the sum of the two elements in each pair is odd (i. e. when divided by 2, the remainder is 1)

#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int m = n + n;
		int a=0;
		int k;
		for(int i=0;i<m;i++) {
			cin>>k;
			if(k % 2==0) a++;
			else a--;
		}
		if(a==0) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}