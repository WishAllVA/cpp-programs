#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findPeakElement(vector<int> &a)
    {
        int start = 0;
        int end = a.size() - 1;
        while (start <= end)
        {
            int mid = (start + mid) / 2;
            if (a[mid] > a[mid - 1] && a[mid] > a[mid + 1])
            {
                return a[mid];
            }
            else if (a[mid] > a[mid - 1] && a[mid + 1] > a[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return -1;
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        int ans = ob.findPeakElement(a);
        cout << ans << "\n";
    }
    return 0;
}
