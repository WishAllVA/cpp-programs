#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main() {
   ll t;
   cin>>t;
   while (t--) {
       ll n;
       cin>>n;
       ll arr[n];
       int c=0,max=INT_MIN;
       map<ll, ll>m1;
       for(ll i=0;i<n;i++) {
           cin>>arr[i];
           if(arr[i]>1) c++;
           m1[arr[i]]++;
           if(arr[i]>max)
           max=arr[i];
       }
       if(c>1) {
    		cout<<0<<endl;
    		continue;
	   }
       if(m1[-1]>0) {
           if(m1[-max]==0) {
           	cout<<0<<endl;
           	continue;
		   }
           else if (m1[-1]>1 && m1[1]==0) {
                cout<<0<<endl;
                continue;
        	}
       }
       cout<<1<<endl;
       
   }
   return 0;
}
