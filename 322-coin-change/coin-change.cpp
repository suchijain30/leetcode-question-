class Solution {
public:
// int recusionsolve(vector<int>& coins, int amount)
// {
//     if(amount==0)
//     {
//         return 0 ;
//     }
//     int mini = INT_MAX ;
//     for(int i=0 ; i<coins.size(); i++)
//     {
     
//         if(coins[i] <= amount)
//         {
//              int recans = recusionsolve(coins, amount-coins[i]); 
            // if(recans != INT_MAX)  // valid answer 
//             {
//             int ans = 1+ recans; // 1 one means 1coin add humne kar lia baki rec dega
//                 mini = min(mini , ans);
//             }
//         } 
//     }
//     return mini ;
// }

// int solve_using_memo(vector<int>& coins, int amount, vector<int>&dp)
// {
//     if(amount==0)
//     {
//         return 0 ;
//     }
//     if(dp[amount] != -1)
//     {
//         return dp[amount];
//     }
//     int mini = INT_MAX ;
//     for(int i=0 ; i<coins.size(); i++)
//     {
//         if(coins[i] <= amount)
//         {
//             int recans = solve_using_memo(coins, amount-coins[i], dp); 
//             if(recans != INT_MAX)
//             {
//             int ans = 1+ recans; // 1 one means 1coin add humne kar lia baki rec dega
//                 mini = min(mini , ans);
//             }
//         }
        
//     }
//     dp[amount]= mini  ;
//     return dp[amount] ;
// }
int solve_usig_tabulation(vector<int>& coins, int amount)
{
    int n = amount ;
    vector<int>dp(n+1 , INT_MAX);  // step 1 dp array banao
    dp[0]= 0 ;                // step2 analyaze base acse or find value to give to dp
    for(int value =1 ; value<= amount ; value++)
    {
       int mini = INT_MAX ;
        for(int i=0 ; i<coins.size(); i++)
        {
            if(value- coins[i] >=0 )
            {
                int recans = dp[value-coins[i] ]; 
                if(recans != INT_MAX)
                {
                    int ans = 1+ recans; 
                    mini = min(mini , ans);
                }
            }
        }
         dp[value]= mini  ;
    }
    return dp[amount] ; 
}
    int coinChange(vector<int>& coins, int amount) {
        // step 1 make a dp vector
        // int n = amount+1; 
        // vector<int>dp(n+1 , -1);
        // int res = solve_using_memo(coins, amount, dp);
        int res = solve_usig_tabulation(coins,amount) ;

        // int res = recusionsolve(coins,  amount);
        if(res==INT_MAX)
        {
            return -1 ;
        }
        return res ;
    }
};