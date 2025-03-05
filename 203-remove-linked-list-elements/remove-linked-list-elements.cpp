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
    ListNode* removeElements(ListNode* head, int val) {
        while (head != NULL && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;  // Free memory
        }
        ListNode* prev = NULL;
        ListNode* curr = head; 
       while(curr!=NULL)
       {
        if(curr->val== val)
        {
            ListNode* newnode= curr;
            curr= curr->next;
            if(prev!= NULL)
            {
                prev->next = curr;
            }
            delete newnode;
        }
        else
        {
            prev = curr;
            curr = curr->next ;
        }
       } 
       return head;
    }
};