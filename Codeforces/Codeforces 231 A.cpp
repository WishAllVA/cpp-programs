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
	LL n,ans=0;
	cin>>n;
	int a,b,c;
	while(n--) {
		cin>>a>>b>>c;
		if(a+b+c >=2) ans++;
	}
	cout<<ans<<endl;
	return 0;
}
