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
	ULL n,m,a;
	cin>>n>>m>>a;
	ULL ans = 0;
	ans += n%a == 0 ? n/a : (n/a)+1;
	ans *= m%a == 0 ? m/a : (m/a)+1;
	cout<<ans<<endl;
	return 0;
}
