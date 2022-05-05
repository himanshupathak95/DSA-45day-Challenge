#include<bits/stdc++.h>
using namespace std;
void file_io()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

bool isPalindrome(int x) 
{
    string s = to_string(x);
    int l = 0, r = s.length() -1;
    while(l<r)
    {
        if(s[l]!=s[r])
            return false;
        l++, r--;
    }
    return true;
}

int main()
{
    file_io();
    

return 0;
}