#include<bits/stdc++.h>
using namespace std;
void file_io()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

int findDuplicate(vector<int>& nums) {
      
      sort(nums.begin(), nums.end());
      
      for(int i=0; i<nums.size(); i++)
      {
        if(nums[i] == nums[i+1])
          return nums[i];
      }
        return nums.size()-1;
}

int main()
{
    file_io();
    

return 0;
}