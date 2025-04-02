class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>hashtable ;
        vector<int>ans;
        for(int i=0 ; i<n ; i++)
        {
            hashtable[nums[i]]++;
        }
        for (auto it = hashtable.begin(); it != hashtable.end(); it++) 
        {
            if (it->second > n / 3) 
            {
                ans.push_back(it->first); // Return the majority element
            }
        }
        return ans ;
    }
};