// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    //Function to find the minimum element in sorted and rotated array.
    int minNumber(int arr[], int low, int high)
    {
        if (low > high)
            return arr[0];
        int mid = (low + high) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return arr[mid + 1];
        }
        else if (arr[mid] > arr[mid - 1] && arr[mid] < arr[mid + 1])
        {
            return min(minNumber(arr, mid + 1, high), minNumber(arr, low, mid - 1));
        }
        else if (arr[mid] < arr[mid - 1] && arr[mid] < arr[mid + 1])
        {
            return arr[mid];
        }
        return -1;
    }
};

// 55
// 429 491 502 511 580 591 592 600 607 621 622 665 692 697 708 717 720 752 758 759 771 780 801 811 828 834 865 873 885 944 955 1 14 18 29 53 70 71 77 120 129 166 169 176 184 222 224 255 326 355 379 393 398 409 417

// Its Correct output is:

// 1

// And Your Code's output is:

// 0

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        Solution obj;
        cout << obj.minNumber(a, 0, n - 1) << endl;
    }
    return 0;
} // } Driver Code Ends