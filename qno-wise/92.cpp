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
vector<int> intoArray(ListNode* head)
    {
      vector<int> a;
      while(head)
      {
        a.push_back(head->val);
        head = head->next;
      }
      return a;
    }
    ListNode* reverseList(ListNode* head) {
      
      vector<int> a = intoArray(head);
      
      reverse(a.begin(), a.end());
      ListNode* temp = head;
      int i = 0;
      while(temp)
      {
        temp->val = a[i++];
        temp = temp->next;
      }
      
      return head;
    }

int main()
{
    file_io();
    

return 0;
}