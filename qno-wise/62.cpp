#include<bits/stdc++.h>
using namespace std;
void file_io()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

bool isPowerOfTwo(int n) {
      
    if(n==0)
    return false;

    return (ceil(log2(n)) == floor(log2(n)));
    
}

int main()
{
    file_io();
    

return 0;
}
