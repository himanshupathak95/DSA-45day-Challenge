#include<bits/stdc++.h>
using namespace std;
void file_io()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

int findKthLargest(vector<int>& nums, int k) {
      
    sort(nums.begin(), nums.end());
    return nums[nums.size()-k];
    
}

int main()
{
    file_io();
    

return 0;
}