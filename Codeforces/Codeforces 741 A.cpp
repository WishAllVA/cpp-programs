#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() {
	ll t;
	cin>>t;
	while(t--) {
		ull m,n;
		cin>>m>>n;
		ll max = -1;
		ll diff = n-m;
		ll a = n/2;
		if(m <= (n/2)) {
			cout<<n%(a+1);
		} else {
			cout<<n%m;
		}
		cout<<endl;
	}
	return 0;
}
