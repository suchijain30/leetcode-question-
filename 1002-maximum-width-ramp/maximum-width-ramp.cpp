class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
    //     vector<int>ans ;
    //    for(int i=0 ; i<nums.size(); i++)
    //    {
    //     for(int j =0; j<nums.size(); j++)
    //     {
    //         if(i<j && nums[i] <= nums[j])
    //         {
    //             ans.push_back(j-i);
    //         }
    //     }
    //    } 
    //    int n = ans.size();
    //    if(n>0)
    //    {
    //     int maxi = *max_element(ans.begin(), ans.end());
    //     return maxi;
    //    }
    //    else
    //    {
    //     return 0 ;
    //    }
    int ans = 0;
    stack<int> s;
    for (int i = 0; i < nums.size(); ++i)
    {
      if (s.empty() || nums[i] < nums[s.top()])
      {
        s.push(i);
      }
    }  

    for (int i = nums.size() - 1; i > ans; --i)
    {
      while (!s.empty() && nums[i] >= nums[s.top()])
      {
        ans = max(ans, i - s.top()), s.pop();
      }
    }
    return ans;
  }
};