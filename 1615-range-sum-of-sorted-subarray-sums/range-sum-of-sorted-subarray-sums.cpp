class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        long long int  a = (n * (n + 1)) / 2;
        vector<long long int> ans; 
        const unsigned int m = 1000000007;
        for (int i = 0; i < n; ++i) 
        {
            long long int sum = 0;
            for (int j = i; j < n; ++j) 
            {
                sum += nums[j];
                sum %= m;
                ans.push_back(sum);
            }
        }

    sort(ans.begin(), ans.end());

    long long int res_sum = 0;
    for (int i = left - 1; i < right; i++) 
    { 
        res_sum += ans[i];
        res_sum %= m;
    }
    return res_sum;
    }
};