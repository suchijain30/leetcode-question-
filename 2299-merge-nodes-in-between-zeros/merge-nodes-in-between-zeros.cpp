/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
      ListNode* d = new ListNode(); 
      ListNode* temp = head ;
       ListNode* curr = d;
       int sum = 0;
       temp=temp->next; 
       while(temp != NULL)
       {
        if(temp->val==0)
        {
            curr ->next = new ListNode(sum);
            curr = curr->next;
            sum = 0; 
            
        }
        sum += temp->val;
        temp =temp->next;
       }
        return d->next;
    }
};