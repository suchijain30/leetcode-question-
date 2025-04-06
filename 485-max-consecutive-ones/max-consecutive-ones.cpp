class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans =0 ;
        int sum =0 ;
        for(int i =0 ; i<nums.size(); i++)
        {
            if(nums[i]==1)
            {
                sum = sum+1 ;
                ans = max(ans ,sum);
            }
            else
            {
                sum =0 ;
            }
        }
        return ans;
  }
};