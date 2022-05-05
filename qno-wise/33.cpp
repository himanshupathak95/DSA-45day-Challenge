#include<bits/stdc++.h>
using namespace std;
void file_io()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

bool validPalindrome(string s) {
        
    int l = 0, r = s.length()-1, lk = 1;
    while(l < r)
    {
        if(s[l] != s[r])
        {
            break;
        }
                l++, r--;
    }
    int f = 0;
    int tl = l;
    int tr = r;
    l++;
    while(l < r)
    {
    if(s[l] != s[r])
    {
        f += 1; break;
    }
        l++, r--;
    }
    
    l = tl; r = tr;
    r--;
    while(l < r)
    {
    if(s[l] != s[r])
    {
        f += 1; break;
    }
        l++, r--;
    }
    
    if(f >= 2)
    return false;
    
    return true;

}

int main()
{
    file_io();
    

return 0;
}