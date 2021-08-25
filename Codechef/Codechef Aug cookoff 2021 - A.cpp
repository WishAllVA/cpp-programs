#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;

int main() {
	ll t;
	cin>>t;
	while(t--) {
		ll n, max=-1;
		cin>>n;
		ll arr[n];
		int flag=0;
		unordered_map<ll, ll> m;
		for(ll i=0;i<n;i++) {
			cin>>arr[i];
			m[arr[i]] = m[arr[i]] + 1;
			if(m[arr[i]] > max) max = m[arr[i]];
			if(max>1) flag=1;
		}
	
		if(n<3) {
			cout<<0<<endl;
			continue;
		}
		if(flag==0) {
			cout<<n-2<<endl;
			continue;
		}
		if (n==3) {
			if(arr[0] != arr[1] && arr[1] != arr[2] && arr[0] != arr[2]) {
				cout<<1<<endl;
				continue;
			}
		}
		cout<<n-max;
//		n-1-max >=0 ? cout<< n-1-max : cout<< 0;
		cout<<endl;
	}
	return 0;
}
