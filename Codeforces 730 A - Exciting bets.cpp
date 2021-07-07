#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ULL;

int main() {
	int t;
	cin>>t;
	while(t--) {
		ULL a,b;
		cin>>a>>b;
		if(a==b) {
			cout<<0<<" "<<0<<endl;
			continue;
		}
		ULL diff = a > b ? a - b : b - a;
		ULL d = a > b ? b : a;
		ULL val = d % diff;
		ULL ans = min(val, diff - val);
		cout<<diff<<" "<<ans<<endl;
	}
	return 0;
}
