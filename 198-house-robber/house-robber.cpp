class Solution {
public:
// int house(vector<int>& nums, int index , int n )
// {
//     if(index>= n)
//     return 0 ;                     // using recursion -tle 

//     int option1 = nums[index] + house(nums , index+2 , n);
//     int option2 = 0+ house(nums , index+1 , n);
//     int ans = max(option1 , option2);
//     return ans ;
// }
int house(vector<int>& nums )
{
    int n = nums.size();
    int i=0 , j=1;
    int amounta =0;
    int amountb=0;
    while(i<n)
    {
        amounta += nums[i];
        i = i+2;
    }
    while(j<n)
    {
        amountb +=nums[j];
        j = j+1;
    }
    int res = max(amounta, amountb);
    return res;
}


int solveusingmemo(vector<int>&dp , int index, vector<int>&nums)
{
    if(index>=nums.size())
    {
        return 0;
    }
    if(dp[index]!= -1)
    {
        return dp[index];
    }
    int option1 = nums[index]+solveusingmemo(dp,index+2,nums);//including first value
    int option2 = 0 + solveusingmemo(dp, index+1, nums); // excluding first value


    dp[index]=max(option1 , option2);
    return dp[index];         // index is changing not n 
}
    int rob(vector<int>& nums) {
       int n = nums.size();
       int index =0 ;
       vector<int>dp(n ,-1);
       int ans = solveusingmemo(dp , index, nums);
       return ans ;
    }

};