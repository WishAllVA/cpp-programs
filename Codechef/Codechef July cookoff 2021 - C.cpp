#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ULL;
typedef long long LL;
const int MAX = 32;

LL getMinOr(LL arr[], LL n)
{
    int bits_count[MAX];
	LL max_bit = 0, sum = 0, ans = 0;
    memset(bits_count, 0, sizeof(bits_count));
    for (LL d = 0; d < n; d++) {
        LL e = arr[d], f = 0;
        while (e > 0) {
            int rem = e % 2;
            e = e / 2;
            if (rem == 1) {
                bits_count[f] += rem;
            }
            f++;
        }
        max_bit = max(max_bit, f);
    }

    for (LL d = 0; d < max_bit; d++) {
        LL temp = pow(2, d);
        if (bits_count[d] > n / 2)
            ans = ans + temp;
    }
    cout<<ans<<" ";
    
    for (int d = 0; d < n; d++) {
        arr[d] = arr[d] ^ ans;
        sum = sum | arr[d];
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL T;
    cin>>T;
    while(T--) {
        LL N;
        cin>>N;
        LL arr[N];
        LL max=0;
        for(LL i=0;i<N;i++) {
        	cin>>arr[i];
		}
		cout<<getMinOr(arr,N)<<endl;
    }
    return 0;
}
