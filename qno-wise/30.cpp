#include<bits/stdc++.h>
using namespace std;
void file_io()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}



int main()
{
    file_io();

    string s;
    cin>> s;

    map<char, int> mp;

    for(int i=0; i<s.length(); i++)
        mp[s[i]]++;

    for(auto &x : mp)
        if(x.second > 1)
            cout<<x.first<<" ";
    cout<<"\n";
    

return 0;
}