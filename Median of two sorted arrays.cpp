#include <bits/stdc++.h>
using namespace std;

double util(int start, int end, int m, int n, vector<int> &nums1, vector<int> &nums2)
{
    if (start > end)
        return -1;
    int p1 = (start + end) / 2;
    int p2 = ((m + n + 1) / 2) - p1;
    int maxLeftX = p1 == 0 ? INT32_MIN : nums1[p1 - 1];
    int maxLeftY = p2 == 0 ? INT32_MIN : nums2[p2 - 1];
    int minRightX = p1 == m ? INT32_MAX : nums1[p1];
    int minRightY = p2 == n ? INT32_MAX : nums2[p2];
    if (maxLeftX <= minRightY && maxLeftY <= minRightX)
    {
        if ((m + n) % 2 == 1)
        {
            return max(maxLeftX, maxLeftY);
        }
        return (double)((double)max(maxLeftX, maxLeftY) + (double)min(minRightX, minRightY)) / 2;
    }
    else if (maxLeftX > minRightY)
    {
        return util(start, p1 - 1, m, n, nums1, nums2);
    }
    else
    {
        return util(p1 + 1, end, m, n, nums1, nums2);
    }
}

double calculateMedian(vector<int> &nums1, vector<int> &nums2)
{
    double median;
    int m = nums1.size();
    int n = nums2.size();
    int start = 0;
    int end = m;
    median = util(start, end, m, n, nums1, nums2);
    return median;
}

int main()
{
    vector<int> nums1{1, 2};
    vector<int> nums2{3, 4};
    double median = nums1.size() < nums2.size() ? calculateMedian(nums1, nums2) : calculateMedian(nums2, nums1);
    cout << median << endl;
    return 0;
}