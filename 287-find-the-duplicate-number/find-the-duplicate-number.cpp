class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>hash;
        for(int i=0 ; i<nums.size(); i++)
        {
            hash[nums[i]]++;
        }
        for(auto &pair :hash)
        {
            if(pair.second>1)
            {
                return pair.first;
            }
        }
        return -1 ;
    }
};