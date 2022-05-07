#include<bits/stdc++.h>
using namespace std;
void file_io()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

string removeKdigits(string num, int k)
{
    string vc = "";
    vc.push_back(num[0]);
    for (int i = 1; i < num.size(); i++)
    {
        while (num[i] < vc.back() && k && vc.length() > 0)
            vc.pop_back(), k--;
        if (vc.length() == 0 && num[i] == '0')
        {
            continue;
        }
        vc.push_back(num[i]);
        }
        if (k > 0)
        {
        while (k-- && vc.length() > 0)
            vc.pop_back();
    }
    if (vc.length() == 0)
        vc.push_back('0');
    return vc;
}

int main()
{
    file_io();
    

return 0;
}