#include<bits/stdc++.h>
using namespace std;
void file_io()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

string addBinary(string a, string b) 
{
    string ans = "";
    int temp = 0;           
    int i = a.size() - 1, j = b.size() - 1;
    while (i >= 0 || j >= 0 || temp == 1)
    {
        temp += ((i >= 0)? a[i] - '0': 0);
        temp += ((j >= 0)? b[j] - '0': 0);
        ans = char(temp % 2 + '0') + ans;
        temp /= 2;
        i--; j--;
    }
    return ans;
}

int main()
{
    file_io();
    

return 0;
}