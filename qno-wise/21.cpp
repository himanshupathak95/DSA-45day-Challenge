#include<bits/stdc++.h>
using namespace std;
void file_io()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

int majorityElement(vector<int>& nums) 
{
    map<int, int> mp;
    for(int i=0; i<nums.size(); i++)
        mp[nums[i]]++;
    int ans = nums[0];
    for(map<int, int> :: iterator it = mp.begin(); it!=mp.end(); it++)
    {
        if((*it).second > nums.size()/2)
            ans = (*it).first;
    }
    return ans;
}

int main()
{
    file_io();
    

return 0;
}