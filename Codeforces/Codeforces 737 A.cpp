#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ULL;
typedef long long LL;

int main() {
	LL T;
	cin>>T;
	while(T--) {
		LL N;
		cin >>N;
		LL arr[N];
		for(LL i=0;i<N;i++) {
			cin>>arr[i];
		}
		sort(arr, arr+N);
		double sum = 0;
		for(LL i=0;i<N-1;i++) {
			sum+=(double)arr[i];
		}
		sum = (double)(sum/(double)(N-1));
		sum+=arr[N-1];
		cout<<setprecision(13)<<sum<<endl;
	}
	return 0;
}

