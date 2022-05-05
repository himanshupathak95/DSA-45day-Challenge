#include<bits/stdc++.h>
using namespace std;
void file_io()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

long long int reversen(long long int x) 
{
    if( x < 0)
    {
        x = (-1)*x;
        string s = to_string(x);
        reverse(s.begin(), s.end());
        s = "-" + s;
        stringstream geek(s);
        long long int n = 0;
        geek >> n;
        if( n > 2147483647 || n < -2147483648)
        {
            return 0;
        }
        return n;
    }
    else 
    {
        string s = to_string(x);
        ::reverse(s.begin(), s.end());
        stringstream geek(s);
        long long int n = 0;
        geek >> n;
        if( n > 2147483647 || n < -2147483648)
        {
            return 0;
        }
        return n;
    }
    
}

int main()
{
    file_io();
    

return 0;
}