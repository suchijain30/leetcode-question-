class Solution {
public:
// int solveusingmemoa(vector<int>&dp1 , int index, vector<int>&nums1)
// {
//     if(index>=nums1.size())
//     {
//         return 0;
//     }
//     if(dp1[index]!= -1)
//     {
//         return dp1[index];
//     }
//     int option1 = nums1[index]+solveusingmemoa(dp1,index+2,nums1);//including first value
//     int option2 = 0 + solveusingmemoa(dp1, index+1, nums1); // excluding first value
//     dp1[index]=max(option1 , option2);
//     return dp1[index];         // index is changing not n 
// }
// int solveusingmemob(vector<int>&dp2 , int index, vector<int>&nums2)
// {
//     if(index>=nums2.size())
//     {
//         return 0;
//     }
//     if(dp2[index]!= -1)
//     {
//         return dp2[index];
//     }
//     int option1 = nums2[index]+solveusingmemob(dp2,index+2,nums2);//including first value
//     int option2 = 0 + solveusingmemob(dp2, index+1, nums2); // excluding first value
//     dp2[index]=max(option1 , option2);
//     return dp2[index];         // index is changing not n 
// }
// int rob(vector<int>& nums) {
//        int n = nums.size();
//        if(n==1)
//        {
//         return nums[0];
//        }
//        vector<int>nums1;
//        vector<int>nums2;
//        for(int i=0 ; i<n-1; i++)
//        {
//         nums1.push_back(nums[i]);
//        }
//        for(int i=1 ; i<n ; i++)
//        {
//         nums2.push_back(nums[i]);
//        }
//        int index =0 ;
//        vector<int>dp1(n ,-1);
//        vector<int>dp2(n ,-1);
//        int ansa = solveusingmemoa(dp1 , index, nums1);
//        int ansb = solveusingmemob(dp2 , index, nums2);
//        int ans = max(ansa, ansb);
//        return ans;
//   }

int solvenum1(vector<int>& nums1)
{
   int n = nums1.size();
        vector<int>dp(n+1);
        dp[0] = 0;
        dp[1] = nums1[0];  // 
        for (int state = 2; state < n + 1; state++) {
            //pick and no pick logic
            int pick = nums1[state - 1] + dp[state - 2];
            int noPick = 0 + dp[state - 1];
            dp[state] = max(pick, noPick);
        }
        return dp[n]; 
}
int solvenum2(vector<int>& nums2)
{
    int n = nums2.size();
        vector<int>dp(n+1);
        dp[0] = 0;
        dp[1] = nums2[0];  // 
        for (int state = 2; state < n + 1; state++) {
            //pick and no pick logic
            int pick = nums2[state - 1] + dp[state - 2];
            int noPick = 0 + dp[state - 1];
            dp[state] = max(pick, noPick);
        }
        return dp[n]; 
}

int rob(vector<int>& nums){
        int n = nums.size();
        if(n==1)
       {
        return nums[0];
       }
       vector<int>nums1;
       vector<int>nums2;
       for(int i=0 ; i<n-1; i++)
       {
        nums1.push_back(nums[i]);
       }
       for(int i=1 ; i<n ; i++)
       {
        nums2.push_back(nums[i]);
       }
       int ansa =  solvenum1( nums1);
       int ansb =  solvenum2(nums2);
       int ans = max(ansa, ansb);
       return ans;

    }
};