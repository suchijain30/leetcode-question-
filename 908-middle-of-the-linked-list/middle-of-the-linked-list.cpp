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
int getlength(ListNode* head)
{
    int count =0 ;
    ListNode* temp = head;
    while(temp !=NULL)
    {
        count +=1 ;
        temp = temp->next ;
    }
    return count;
}
    ListNode* middleNode(ListNode* head) {
        int n = getlength(head);
        ListNode* temp = head;
        int position = n/2 ;   // zero based indexing 
        while(position>=1)
        {
            temp = temp->next;
            position --;
        }
        return temp;
    }
};