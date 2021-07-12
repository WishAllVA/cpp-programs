// Given an integer x, return true if x is palindrome integer.

// An integer is a palindrome when it reads the same backward as forward. For example, 121 is palindrome while 123 is not.

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        vector<int>a;
        while(x!=0) {
            int b = x%10;
            
            a.push_back(b);
            x/=10;
        }
        int n = a.size();
        int i=0, j=n-1, flag=0;
        while(i<j) {
            if(a[i++] != a[j--]) {
                flag=1;
                break;
            }
        }
        if(!flag) return true;
        return false;
    }
};