#include<bits/stdc++.h>
using namespace std;
void file_io()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

int missingNumber(vector<int>& nums) {

    sort(nums.begin(), nums.end());
    
    int k = 0;
    for(auto &x : nums)
    {
        if(x != k++)
            return k-1;
    }
    return nums.size();
}

int main()
{
    file_io();
    

return 0;
}