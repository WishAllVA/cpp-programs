#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ULL;
typedef long long LL;

#define fo(i,n) for(i=0; i<n;i++)

LL T;
vector<LL> v;
vector<ULL> vu;
vector<vector<LL> >vm;
vector<vector<ULL> >vmu;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>T;
	while(T--) {
		ULL n, time=0;
		cin>>n;
		if(n < 6) {
			cout<<15<<endl;
			continue;
		}
		if(n%6 == 1 || n%6 == 2) {
			time = (((n/6) - 1) * 15) + 20;
		}
		if(n%6 == 3 || n%6 == 4) {
			time = (((n/6) - 1) * 15) + 25;
		}
		if(n%6 == 0) {
			time = (n/6 * 15);
		}
		if(n%6 == 5) {
			time = (n/6 * 15) + 15;
		}
		cout<<time<<endl;
	}
	return 0;
}
