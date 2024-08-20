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
ListNode* merge(ListNode* list1, ListNode* list2) 
{
    ListNode* mer1 = list1 ;
    ListNode* mer2 = list2 ;
    ListNode* ans= new ListNode(-1);
    ListNode* merge= ans ;
    if(mer1==0)
    {
        return mer2;
    }
    if(mer2==0)
    {
        return mer1 ;
    }
    while(mer1 !=NULL && mer2!=NULL)
    {
        if(mer1->val <= mer2->val)
        {
            merge->next= mer1 ;
            merge = mer1 ;
            mer1 = mer1->next ;
        }
        else
        {
            merge->next= mer2 ;
            merge = mer2 ;
            mer2 = mer2->next ;
        }
    }
    while(mer1!=NULL)
    {
        merge->next= mer1 ;
        merge = mer1 ;
        mer1 = mer1->next ;  
    }
    while(mer2!=NULL)
    {
        merge->next= mer2 ;
        merge = mer2 ;
        mer2 = mer2->next ;
    }
    return ans->next ;
}
ListNode* findmid(ListNode* head)
{
    ListNode* slow = head ;
    ListNode* fast = head->next ;        
        while(fast!= NULL && fast->next != NULL)
        {
            slow= slow->next ;
            fast= fast->next->next ;
        }
    return slow ;
}
    ListNode* sortList(ListNode* head)
    {
       if(head == NULL || head->next == NULL)
       {
        return head ;
       }
       //mid find
       ListNode* mid = findmid(head);

       // braek ll in 2 list 
       ListNode* left = head ;
       ListNode* right = mid->next ;
       mid->next = NULL ;
       // recursivery divide
       left = sortList(left);
       right = sortList(right) ;
       // merge lsit 
       ListNode* mergelist = merge(left , right);
       return mergelist ; 
    }
};