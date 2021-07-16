class Solution
{
public:
    int myAtoi(string s)
    {
        long long a = 0;
        bool isNegative = false;
        int i = 0;
        while (s[i] == ' ')
        {
            i++;
        }
        if (s[i] == '-' || s[i] == '+')
        {
            isNegative = s[i] == '-' ? true : false;
            i++;
        }
        for (i; i < s.length(); i++)
        {

            if ((int)s[i] < 48 || (int)s[i] > 57)
            {
                break;
            }
            else
            {
                if (!isNegative)
                {
                    if (a + (s[i] - '0') >= 214748371)
                    {
                        a = 2147483647;
                        break;
                    }
                }
                else
                {
                    if (a + (s[i] - '0') >= 214748372)
                    {
                        a = 2147483648;
                        break;
                    }
                }

                a = a * 10 + (s[i] - '0');
            }
        }
        return isNegative ? -a : a;
    }
};