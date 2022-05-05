#include<bits/stdc++.h>
using namespace std;
void file_io()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

int maxProfit(vector<int>& prices) 
{
    int mn = INT_MAX, ans = 0;
    for(int i=0; i<prices.size(); i++)
    {
        mn = min(mn, prices[i]);
        ans = max(ans, prices[i] - mn);
    }
    return ans;
}

int main()
{
    file_io();
    

return 0;
}