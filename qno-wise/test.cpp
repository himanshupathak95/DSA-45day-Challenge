#include<bits/stdc++.h>
using namespace std;
void file_io()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

bool find132pattern(vector<int>& nums) {
      
    if(nums.size() < 3)
    return false;
    
    int mn = INT_MAX;
    int mx = INT_MIN;
    
    for(int i=0; i<nums.size(); i++)
    {
    mn = min(mn, nums[i]);
    mx = max(mx, nums[i]);
    if(i > 1)
    {
        if((nums[i] > mn) && (nums[i] < mx))
        return true;
    }

    }
    return false;
}

int main()
{
    file_io();

    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<find132pattern(a);
    

return 0;
}