class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1);
        ans[0] = 0;
        for (int i = 1; i <= n; i++) {
            // If 'i' is even: same number of 1s as i / 2
            // If 'i' is odd: one more 1 than i / 2
            ans[i] = ans[i / 2] + (i % 2);
        }
        return ans;
    }
};