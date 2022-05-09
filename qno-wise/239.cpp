#include<bits/stdc++.h>
using namespace std;
void file_io()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

vector<int> countBits(int n) {
    vector<int> ans;
    for(int i=0; i<=n; i++)
    {
    ans.push_back(__builtin_popcount(i));
    }
    return ans;
}

int main()
{
    file_io();
    

return 0;
}