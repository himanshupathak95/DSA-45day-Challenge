#include<bits/stdc++.h>
using namespace std;
void file_io()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

long long findMinDiff(vector<long long> a, long long n, long long m){
        
    sort(a.begin(), a.end());
    long long int mn = INT_MAX;
    for(int i=0; i<=n-m; i++)
    {
        mn = min(mn, a[i+m-1]-a[i]);
    }
    return mn;
}   

int main()
{
    file_io();
    

return 0;
}