// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int equilibriumPoint(long long a[], int n) {
        long long p[n];
        p[0]=0;
        long long sum=0;
        sum += a[0];
        for(int i=1;i<n;i++) {
            sum+=a[i];
            p[i] = p[i-1] + a[i-1];
        }
        for(int i=0;i<n;i++) {
            if(2*p[i] == sum-a[i]) return i+1;
        }
        return -1;
    }

};

// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends