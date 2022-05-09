#include<bits/stdc++.h>
using namespace std;
void file_io()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

vector<int> topKFrequent(vector<int>& nums, int k) {
      
    unordered_map<int, int> ump;
    
    for(int i=0; i<nums.size(); i++)
    {
    ump[nums[i]]++;
    }
    vector<pair<int, int>> vp;
    for(auto &x : ump)
    {
    vp.push_back({x.second, x.first});
    }
    sort(vp.rbegin(), vp.rend());
    vector<int> ans;
    for(int i=0; i<k; i++)
    {
    ans.push_back(vp[i].second);
    }
    return ans;
}

int main()
{
    file_io();
    

return 0;
}