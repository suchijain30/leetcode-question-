class Solution {
public:
// int solve(string a , string b , int i , int j)
// {
//     if(i==a.length() || j==b.length())
//     {
//         return 0;
//     }
//     int ans=0 ;
//     if(a[i]==b[j])
//     {
//         ans= 1+ solve(a,b, i+1, j+1);
//     }
//     else
//     {
//         ans= max(solve(a,b,i+1, j), solve(a,b,i, j+1));
//     }
//     return ans;
// }

    int longestCommonSubsequence(string text1, string text2) {
    //    int res = solve(text1, text2, 0,0);
    //    return res; 
    int n = text1.length(), m = text2.length();
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
    for(int i= n-1; i>=0 ; i--)
    {
        for(int j = m-1; j>=0 ; j--)
        {
            int ans =0 ;
            if(text1[i]==text2[j])
            {
                ans = 1+ dp[i+1][j+1];
            }
            else
            {
                ans = max(dp[i][j+1], dp[i+1][j]);
            }
            dp[i][j]=ans;
        }
    }
    return dp[0][0];
    }
};