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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if (head == NULL || head->next == NULL || head->next->next == NULL) 
        {
            return {-1, -1};  
        }
        ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* newnode = curr->next;
        vector<int> cp;
        int index = 1; 
        while (newnode != NULL) 
        {
            if ((curr->val > prev->val && curr->val > newnode->val) ||
                (curr->val < prev->val && curr->val < newnode->val)) 
                {
                cp.push_back(index);
                }
            prev = curr;
            curr = newnode;
            newnode = newnode->next;
            index++;
        }
        int n = cp.size() ;
        if ( n < 2) 
        {
            return {-1, -1};  
        }
        // int maxi =  cp[n-1];
        // int mini = cp[0];
        // int sec_maxi = cp[n-2];
        // int maxi_dis = maxi- mini ;
        // int mini_dis = maxi- sec_maxi ;
        // return {mini_dis , maxi_dis } ;
        int min_distance = INT_MAX;
        for (int i = 1; i < n; ++i) {
            min_distance = min(min_distance, cp[i] - cp[i - 1]);
        }

        int max_distance = cp[n - 1] - cp[0];
        return {min_distance, max_distance};
    }
};