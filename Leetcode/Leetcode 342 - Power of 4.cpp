class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        for (long long i = 1;; i = i * 4)
        {
            if (i == n)
                return true;
            if (i > n)
                return false;
        }
    }
};