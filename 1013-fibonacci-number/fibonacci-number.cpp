class Solution {
public:
int solveusingdp(int n , vector<int>&dp)
{
if(n==0 || n==1)
        {
            return n ;                   // base case 
        }
        //step 3 if ans already present then return ans
        if(dp[n]!=-1)
        {
            return dp[n];
        }

        // step 2 store and return ans
        dp[n]= solveusingdp(n-1,dp)+solveusingdp(n-2,dp);
        return dp[n];
}
    int fib(int n) {
        //using recursion

        // if(n==0)
        // return 0 ;
        // if(n==1)
        // return 1;
        // int ans =fib(n-1)+ fib(n-2);
        // return ans ;

        //using dp 
        // top down - rec+memoziation 

        // step1 create a dp array
        vector<int>dp(n+1 , -1);  // size is n+1 and intialized with -1 
        int ans = solveusingdp(n , dp);
        return ans ;    
    }
};