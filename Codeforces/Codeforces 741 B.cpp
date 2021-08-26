#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main() {
	ll t;
	cin>>t;
	while(t--) {
		ll k;
		cin>>k;
		string s;
		cin>>s;
		int flag=0;
		for(int i=0; i<k; i++) {
			if(s[i]=='1' || s[i]=='4' || s[i]=='6' || s[i]=='8' || s[i]=='9') {
				cout<<1<<endl<<s[i]<<endl;
				flag=1;
				break;
			}
		}
		if(flag) continue;
		for(int i=0; i<k; i++) {
			if(s[i]=='2') {
				for(int j=i+1; j<k; j++) {
					if(s[j]=='5' || s[j]=='7' || (s[j]==s[i] && i!=j)) {
						flag = 1;
						cout<<2<<endl<<2<<s[j]<<endl;
						break;
					}	
				}
			}
			if(flag) break;
			if(s[i]=='3') {
				for(int j=i+1; j<k; j++) {
					if(s[j]=='5' || s[j]=='2' || (s[j]==s[i] && i!=j)) {
						flag = 1;
						cout<<2<<endl<<3<<s[j]<<endl;
						break;
					}	
				}
			}
			if(flag) break;
			if(s[i]=='5') {
				for(int j=i+1; j<k; j++) {
					if(s[j]=='2' || s[j]=='7' || (s[j]==s[i] && i!=j)) {
						flag = 1;
						cout<<2<<endl<<5<<s[j]<<endl;
						break;
					}
				}
			}
			if(flag) break;
			if(s[i]=='7') {
				for(int j=i+1; j<k; j++) {
					if(s[j]=='5' || s[j]=='2' || (s[j]==s[i] && i!=j)) {
						flag = 1;
						cout<<2<<endl<<7<<s[j]<<endl;
						break;
					}
				}
			}
			if(flag) break;
		}
		if(flag) continue;
	}
	return 0;
}
