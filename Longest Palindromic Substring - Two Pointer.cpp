class Solution
{
public:
    int extractFromMiddle(string s, int start, int end)
    {
        if (start > end || s.empty())
            return 0;
        while (start >= 0 && end < s.length() && s[start] == s[end])
        {
            start--;
            end++;
        }
        return end - start - 1;
    }
    string longestPalindrome(string s)
    {
        int start = 0;
        int end = 0;
        int lent = 0;
        for (int i = 0; i < s.length(); i++)
        {
            int len1 = extractFromMiddle(s, i, i);
            int len2 = extractFromMiddle(s, i, i + 1);
            int len = max(len1, len2);
            if (len > (end - start))
            {
                lent = len;
                start = i - ((len - 1) / 2);
                end = i + (len / 2);
            }
        }
        return s.substr(start, lent);
    }
};