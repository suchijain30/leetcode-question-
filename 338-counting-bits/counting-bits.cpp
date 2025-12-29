class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int> ans;
        for (int i = 0; i <= n; i++)
        {
            int x = i;      // copy of i
            int count = 0;

            while (x > 0) 
            {
                x = x & (x - 1);
                count++;
            }
            ans.push_back(count);
        }
    return ans ;
    }
};