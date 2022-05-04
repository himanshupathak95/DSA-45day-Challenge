#include<bits/stdc++.h>
using namespace std;
void file_io()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

int maxArea(vector<int>& height) 
{ 
    vector<pair<int, int>> vp;
    map<int, int> mp;
    for(int i=0; i<height.size(); i++)
    {
        vp.push_back(make_pair(height[i], i));
        mp[i]++;
    }
    sort(vp.begin(), vp.end());
    int ans = INT_MIN;
    for(int i=0; i<vp.size()-1; i++)
    {
        mp.erase(vp[i].second);
        ans = max(ans, max((vp[i].first)*abs((*mp.rbegin()).first-vp[i].second),                      (vp[i].first)*abs((*mp.begin()).first-vp[i].second)));
    }

    return ans;   
}

int main()
{
    file_io();
    

return 0;
}