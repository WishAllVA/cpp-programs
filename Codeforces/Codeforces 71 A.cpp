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
		string s;
		cin>>s;
		LL n = s.size();
		if(n > 10) {
			cout<<s[0]<<n-2<<s[n-1]<<endl;
			continue;
		}
		cout<<s<<endl;
	}
	return 0;
}
