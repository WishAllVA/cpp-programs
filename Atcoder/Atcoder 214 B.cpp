#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;

int main() {
	ll s,t;
	ull ans=0;
	cin>>s>>t;
	for(int i=0;i<=s;i++) {
		for(int j=0;j<=s;j++) {
			for(int k=0;k<=s;k++) {
				if((i+j+k <=s) && ((i*j*k) <= t)) ans++;
			}	
		}
	}
	cout<<ans;
	return 0;
}
