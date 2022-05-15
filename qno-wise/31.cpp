#include <bits/stdc++.h>
using namespace std;
void file_io()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int strStr(string haystack, string needle)
{
    int n = needle.length();
    int h = haystack.length();
    if (needle == "")
        return 0;
    for (int i = 0; i <= h - n; i++)
    {
        if (haystack[i] == needle[0] && haystack[i + n - 1] == needle[n - 1])
        {
            if (needle == (haystack.substr(i, n)))
                return i;
        }
    }
    return -1;
}

int main()
{
    file_io();

    return 0;
}