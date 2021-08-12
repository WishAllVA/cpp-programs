#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ULL;
typedef long long LL;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	LL T;
	cin>>T;
	while(T--) {
		LL N,K;
		cin>>N>>K;
		if(K==N) {
			cout<<"Yes"<<endl;
			continue;
		}
		LL arr[N];
		LL count = 1;
		for(LL i=0;i<N;i++) {
			cin>>arr[i];
		}
		for(LL i=0;i<N-1;i++) {
			if(arr[i+1]<arr[i]) {
				count++;
				i++;
			}
		}
		if(count<=K) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}

