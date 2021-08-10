#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ULL;
typedef long long LL;

#define fo(i,a) for(i=0; i<a;i++)

LL T;
vector<LL> v;
vector<ULL> vu;
vector<vector<LL> >vm;
vector<vector<ULL> >vmu;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,k;
	cin>>a>>k;
	int arr[a];
	int i;
	fo(i,a) {
		cin>>arr[i];
	}
	k--;
	int ans=0;
	int temp = arr[k];
	for(i=0;i<a;i++) {
		if(arr[i]<temp || arr[i]<=0) break;
		ans++;
	}
	cout<<ans<<endl;
	return 0;
}
