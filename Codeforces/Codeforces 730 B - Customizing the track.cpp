#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ULL;

int main() {
	int t;
	cin>>t;
	while(t--) {
		ULL n, sum=0,k;
		cin>>n;
		for(ULL i =0;i<n;i++) {
			cin>>k;
			sum += k;
		}
		ULL val = sum % n;
		ULL ans = val * (n - val);
		cout<<ans<<endl;
	}
	return 0;
}
