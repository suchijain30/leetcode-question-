class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
    unordered_set<int>s ;
    int m = INT_MAX ;
    for(int i=0 ; i<nums.size(); i++)
    {
        if(nums[i]<k)
        {
            return -1 ;
        }
        m = min(m , nums[i]);
        s.insert(nums[i]);
    }
    return s.size()- (m==k) ;
    }
};