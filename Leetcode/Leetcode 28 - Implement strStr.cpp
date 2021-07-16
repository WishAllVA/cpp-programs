class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        if (needle == "")
            return 0;
        if (haystack == needle)
            return 0;

        for (int i = 0; i < haystack.length(); i++)
        {
            int j = i;
            int k = 0;
            if (haystack[j] == needle[k])
            {
                while (haystack[j] == needle[k] && j < haystack.length())
                {
                    j++;
                    k++;
                }
                if (k == (needle.length()))
                    return i;
            }
        }
        return -1;
    }
};