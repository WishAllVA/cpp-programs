#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[5][5];
    int a,b;
    for(int i=0;i<5;i++) {
    	for(int j=0;j<5;j++) {
    		cin>>arr[i][j];
    		if(arr[i][j] != 0) {
    			a = i;
				b = j;	
			}
		}
	}
	cout<<abs(2-a)+abs(2-b);
    return 0;
}
