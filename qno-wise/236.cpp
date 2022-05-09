#include<bits/stdc++.h>
using namespace std;
void file_io()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

int climbStairs(int n) {
    vector<int> a(46);
    a[0] = 1, a[1] = 1;
    for (int i=2; i<=n; i++)
        a[i] = a[i-1] + a[i-2];
    return a[n];
}

int main()
{
    file_io();
    

return 0;
}