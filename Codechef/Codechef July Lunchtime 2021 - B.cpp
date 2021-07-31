#include<bits/stdc++.h>
using namespace std;

typedef long long LL;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while (T--) {
		int g = 0;
		LL N;
		cin>>N;
		LL arr1[N];
		LL arr2[N];
		LL arr3[N] = { 0 } ;
		LL arr4[N];
		for(LL i=0;i<N;i++) {
			cin>>arr1[i];
		}
		LL minMod = INT_MAX;
		for(LL i=0;i<N;i++) {
			cin>>arr2[i];
			if(((arr1[0] + arr2[i]) % N) < minMod) minMod = (arr1[0] + arr2[i])%N;
		}
		int flag=0;
		for(LL i=0;i<N;i++) {
			if(((arr1[0] + arr2[i])%N) == minMod) {
				LL l = 0;
				LL y = 0;
				for(LL j=i;j<N;j++) {
					arr3[y++] = (arr1[l++] + arr2[j])%N;
				}
				for(LL j=0;j<i;j++) {
					arr3[y++] = (arr1[l++] + arr2[j])%N;
				}
				for(LL j=0;j<N;j++) {
					if(arr3[j]==arr4[j]) continue;
					else if (arr3[j] > arr4[j]) {
						flag = 1;
						break;
					} else {
						flag = 2;
						break;
					}
				}
				if(g==0 || flag == 2) {
//					copy(arr3, arr3+N, arr4);
					g=1;
					for(LL z=0;z<N;z++) arr4[z] = arr3[z];
				}
			}
			flag=0;
		}
		for(LL i=0;i<N;i++) {
			cout<<arr4[i] <<" ";
		}
		cout<<endl;
	}
	return 0;
}