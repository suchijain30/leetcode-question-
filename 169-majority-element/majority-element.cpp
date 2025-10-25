class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // int n = nums.size();
        // int s=0 ;
        // int e= n-1 ;
        // int mid = s + (e-s)/2 ;
        // return nums[mid] ;
        unordered_map<int, int> count;
        int n = nums.size();
        
        for (int i=0 ; i<nums.size(); i++) {
            count[nums[i]]++;
            if (count[nums[i]] > n / 2)
                return nums[i];
        }
        return -1; // though problem guarantees majority element exists
    }
};