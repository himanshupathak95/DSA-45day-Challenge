#include<bits/stdc++.h>
using namespace std;
void file_io()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

void moveZeroes(vector<int>& nums) {
      
    for(int i=nums.size()-1; i>=0; i--)
    {
        if(!nums[i])
        {
            for(int j=i; j<nums.size()-1; j++)
            nums[j] = nums[j+1];
            nums.back() = 0;
        }
    }
}

int main()
{
    file_io();
    

return 0;
}