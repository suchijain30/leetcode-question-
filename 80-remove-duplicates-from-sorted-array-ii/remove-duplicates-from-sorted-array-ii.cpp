class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int n = nums.size();
      if(n<=2)
      {
        return n;
      }
      int start =1 ;
      for(int i=2 ; i<n ; i++)
      {
        if(nums[i] != nums[start-1])
        {
            start++;
            swap(nums[start], nums[i]);
        }
      }
      return start+1;
    }

};