#include<iostream>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;

int main() {
    int t;
    cin>>t;
    while(t--) {
		int n,ans;
		cin>>n;
		int arr1[n], arr2[n];
		int a=0,b=0;
		for(int i=0;i<n;i++) {
			cin>>arr1[i];
		}
		for(int i=0;i<n;i++) {
			cin>>arr2[i];
			if(arr2[i]>arr1[i]) b += arr2[i]-arr1[i];
			if(arr2[i]<arr1[i]) a += arr1[i]-arr2[i];
		}
		if((a+b)%2==0) {
			if(a%2==0) {
				cout<< (a+b)/2<<endl;
				ans = (a+b)/2;
			}
			else {
				cout<<((a+b)/2)<<endl;
				ans = ((a+b)/2);
			}
			
		} else {
			cout<<-1<<endl;
			ans = -1;
		}
		for(int i=0;i<n;i++) {
			if(ans==-1) {
				break;
			}
			while(arr1[i]!=arr2[i]) {
				if(arr1[i]<arr2[i]) {
				
					arr1[i]++;
					int j=i+1;
					while(j<n && arr1[j]<=arr2[j]) {
						j++;
					}
					arr1[j]--;
						cout<<j+1<<" ";
					cout<<i+1<<endl;
				}
				if(arr1[i]>arr2[i]) {
					
					arr1[i]--;
					int j=i+1;
					while(j<n && arr1[j]>=arr2[j]) {
						j++;
					}
					arr1[j]++;
					cout<<i+1<<" ";
					cout<<j+1<<endl;
				}
			}
		}
    }
    return 0;
}