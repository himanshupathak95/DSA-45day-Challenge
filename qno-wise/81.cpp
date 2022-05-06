#include<bits/stdc++.h>
using namespace std;
void file_io()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* middleNode(ListNode* head) {
      
    ListNode* t1 = head;
    ListNode* t2 = head;
    
    while(t2 && t2->next != NULL)
    {
        t1 = t1->next;
        t2 = t2->next->next;
    }
    
    return t1;
    
}

int main()
{
    file_io();
    

return 0;
}