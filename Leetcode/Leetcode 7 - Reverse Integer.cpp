// Given a signed 32-bit integer x, return x with its digits reversed.
// If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

class Solution {
public:
    int reverse(int x) {
        bool isNegative = false;
        unsigned long long b;
        if(x==-2147483648) return 0;
        if(x<0) {
            isNegative = true;
            b = x * -1;
        } else b=x;
        
        unsigned long long ans = 0;
        while(b!=0) {
            ans = (ans*10) + (b%10);
            if(ans>2147483647) return 0;
            b/=10;
        }
        if(isNegative) {
            long long ans2 = ans * -1;
            return ans2;
        }
        return ans;
    }
};