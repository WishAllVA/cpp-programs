#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ULL;
typedef long long LL;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL T;
    cin>>T;
    while(T--) {
        LL n;
        cin>>n;
        LL arr[n];
        map<LL,LL>mp;
        LL ans=0;
        for(LL i=0;i<n;i++) {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        for(LL i=0;i<n;i++) {
            if(mp[arr[i]]==1)
            ans++;
            if(mp[arr[i]]>1) {
                LL c=mp[arr[i]];
                LL p=arr[i]-1;
                ans += min(p,c);
                mp[arr[i]]=0;
            }
        }
        cout<<ans<<endl;
    }
    
}
