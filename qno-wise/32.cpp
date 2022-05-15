#include <bits/stdc++.h>
using namespace std;
void file_io()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

string longestCommonPrefix(vector<string> &strs)
{

    string ans = "";
    int z = 0;
    for (int j = 0; j < strs[0].length(); j++)
    {
        char ch = strs[0][j];
        int ctr = 0;
        int ter = 0;
        for (int i = 0; i < strs.size(); i++)
        {
            if (strs[i][j] == ch)
                ctr++;
            else
            {
                ter = 1;
                break;
            }
        }
        if (ter)
            break;
        if (ctr == strs.size())
            ans.push_back(ch);
    }

    return ans;
}

int main()
{
    file_io();

    return 0;
}