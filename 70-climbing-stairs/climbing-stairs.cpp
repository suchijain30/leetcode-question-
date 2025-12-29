class Solution {
public:
// int solveusingrecursion(int n)
// {
//     if(n ==0)
//        return 1;
//        if(n==1)
//        return 1 ;
//        int ans = climbStairs(n-1)+climbStairs(n-2);
//        return ans ;
// }
// int solveusingdp(int n , vector<int>&dp)
// {
//     if(n==0 )
//     {
//         return 1 ;
//     }
//     if(n==1)
//     {
//         return 1 ;
//     }
//     if(dp[n]!= -1)
//     {
//         return dp[n];
//     }

//     dp[n]= solveusingdp(n-1 , dp) +solveusingdp(n-2 , dp);
//     return dp[n];
// }
//     int climbStairs(int n) {
//         vector<int>dp(n+1 , -1);
//         int ans = solveusingdp(n , dp);
//         return ans ;
//     }
int climbStairs(int n){
    if(n<=2){
        return n ;
    }
    vector<int>dp(n+1);
    dp[1]= 1;
    dp[2]=2;
    for(int i=3 ; i<=n; i++ )
    {
        dp[i]= dp[i-1]+dp[i-2];
    }
    return dp[n];
}
};