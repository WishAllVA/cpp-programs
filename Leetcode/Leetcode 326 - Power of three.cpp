class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        for (long long i = 1;; i = i * 3)
        {
            if (i == n)
                return true;
            if (i > n)
                return false;
        }
    }
};