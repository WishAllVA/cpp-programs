#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;

int main() {
	ll n;
	cin>>n;
	ll ans=0;
	if(n<=125) {
		cout<<4;
		return 0;
	}
	if(n<=211) {
		cout<<6;
		return 0;
	}
	cout<<8;
	return 0;
}
