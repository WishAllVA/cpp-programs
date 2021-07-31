#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
	
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL T;
    cin>>T;
    while(T--)
    {
        LL N;
        cin >> N;
        LL arr[N];
        map<LL,LL>mp;
        for(int i=0;i<N;i++) {
        	cin >> arr[i];
        	mp[arr[i]]++;
        }
        LL ans=0;
        for(int i=0;i<N;i++) ans += N - mp[arr[i]];
        cout<<ans<<endl;       
    }
}