class Solution
{
public:
    string minRemoveToMakeValid(string s)
    {
        string ans = "", finalans = "";
        int open = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                open++;
            }
            if (s[i] == ')')
            {
                if (open == 0)
                    continue;
                open--;
            }
            ans += s[i];
        }
        if (open != 0)
        {
            for (int i = ans.length() - 1; i >= 0; i--)
            {
                if (ans[i] == '(' && open > 0)
                {
                    open--;
                    ans.erase(i, 1);
                }
            }
        }
        return ans;
    }
};