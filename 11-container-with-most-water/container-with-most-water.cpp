class Solution {
public:
    int maxArea(vector<int>& height) {
       int i = 0, j = height.size() - 1;
        int ans = 0;
        while (i < j) {
            int lb = min(height[i], height[j]) * (j - i);   // l*h 
            ans = max(ans, lb);
            if (height[i] < height[j]) {
                ++i;
            } else {
                --j;
            }
        }
        return ans; 
    }
};