class Solution
{
public:
    vector<string> generateParenthesis(int n)
    {
        string s = "";
        vector<string> v;
        return func(0, 0, n, v, s);
    }
    vector<string> func(int start, int end, int max, vector<string> &v, string s)
    {
        if (s.length() == 2 * max)
        {
            v.push_back(s);
        }
        if (start < max)
            func(start + 1, end, max, v, s + '(');
        if (end < start)
            func(start, end + 1, max, v, s + ')');
        return v;
    }
};