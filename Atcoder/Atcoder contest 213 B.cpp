#include<iostream>
using namespace std;
typedef long long LL;

int main() {
	LL N;
	cin>>N;
	LL arr[N];
	LL max = -1;
	for(int i=0;i<N;i++) {
		cin>>arr[i];
		if(arr[i] > max) max = arr[i];
	}
	for(int i=0;i<N;i++) {
		if(arr[i] == max) arr[i] = -1;
	}
	max = -1;
	LL index = -1;
	for(int i=0;i<N;i++) {
		if(arr[i] > max) {
			max = arr[i];
			index=i;
		}
	}
	cout<<index+1;
	return 0;
}
