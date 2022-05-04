#include<bits/stdc++.h>
using namespace std;
void file_io()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

vector<int> findDuplicates(vector<int>& nums) {
      
    map<int, int> mp;
    for(auto &x: nums)
    mp[x]++;
    vector<int> ans;
    for(auto &x : mp)
    if(x.second == 2)
        ans.push_back(x.first);
    
    return ans;
    
}

int main()
{
    file_io();
    

return 0;
}