#include <bits/stdc++.h>
using namespace std;
void file_io()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

bool isNumber(string s)
{

    if (s.length() == 1)
    {
        if (!isdigit(s[0]))
            return false;
    }
    int dg = 0;
    for (auto x : s)
    {
        if (isdigit(x))
            dg++;
    }

    if (!dg)
        return false;

    int ethere = 0;
    int deci = 0;
    int ein = s.length();
    for (int i = 0; i < s.length(); i++)
    {
        if (isalpha(s[i]))
        {
            if (s[i] != 'e' && s[i] != 'E')
                return false;
            else
            {
                if (ethere || i == s.length() - 1 || i == 0)
                    return false;
                if (s[i - 1] == '+' || s[i - 1] == '-')
                    return false;
                ethere++;
                ein = i;
            }
        }

        if (s[i] == '-' || s[i] == '+')
        {
            if (i == s.length() - 1)
                return false;
            if (i)
            {
                if (s[i - 1] != 'e' && s[i - 1] != 'E')
                    return false;
            }
        }

        if (s[i] == '.')
        {
            if (deci)
                return false;
            else
            {
                if (i == 0)
                    if (s.length() >= 2)
                        if (!isdigit(s[i + 1]))
                            return false;
                deci++;
                if (ein < i)
                    return false;
            }
        }
    }
    return true;
}

int main()
{
    file_io();

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << isNumber(s) << "\n";
    }

    return 0;
}

// 12 8