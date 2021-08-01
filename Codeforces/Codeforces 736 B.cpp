#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ULL;
typedef long long LL;

int main() {
	int t;
	cin>>t;
	while(t--) {
		LL p;
		cin>>p;
		string arr1, arr2;
			cin>>arr1;	
			cin>>arr2;	
		
		LL count = 0;
		for(LL i=0;i<p;i++) {
			if(arr2[i]=='1') {
				if(i>0) {
					if(arr1[i-1] == '1') {
						count++;
						arr1[i-1] = '2';
						continue;
					}	
				}
				if(arr1[i] == '0') {
					count++;
					arr1[i]='2';
					continue;
				}
				if(i < p-1) {
					if(arr1[i+1] == '1') {
						count++;
						arr1[i+1] = '2';
						continue;
					}	
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
