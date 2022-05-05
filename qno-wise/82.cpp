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
bool hasCycle(ListNode *head) {

    if(head == NULL || head->next == NULL || head->next->next == NULL)
    return false;
    ListNode *t1 = head, *t2 = head->next->next;
    while(t1 && t2)
    {
    if(t1 == t2)
        return true;
    t1 = t1->next;
    if(t2->next)
    t2 = t2->next->next;
    else break;
    }
    return false;
}

int main()
{
    file_io();
    

return 0;
}