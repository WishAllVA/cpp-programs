class Solution
{
public:
    bool isValid(string s)
    {
        int p = 0, c = 0, b = 0;
        string ch = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '{')
            {
                c++;
                ch += 'c';
            }
            if (s[i] == '(')
            {
                p++;
                ch += 'p';
            }
            if (s[i] == '[')
            {
                b++;
                ch += 'b';
            }
            if (s[i] == ']')
            {
                if (ch == "" || ch[ch.length() - 1] != 'b' || b <= 0)
                    return false;
                b--;
                ch = ch.substr(0, ch.size() - 1);
            }
            if (s[i] == ')')
            {
                if (ch == "" || ch[ch.length() - 1] != 'p' || p <= 0)
                    return false;
                p--;
                ch = ch.substr(0, ch.size() - 1);
            }
            if (s[i] == '}')
            {
                if (ch == "" || ch[ch.length() - 1] != 'c' || c <= 0)
                    return false;
                c--;
                ch = ch.substr(0, ch.size() - 1);
            }
        }
        return b == 0 && c == 0 && p == 0;
    }
};