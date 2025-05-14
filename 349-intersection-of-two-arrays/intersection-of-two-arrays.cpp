class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st1(nums1.begin(), nums1.end());  
  
        unordered_set<int> st2;                    
        vector<int> res;  

        for(int i=0 ; i<nums2.size(); i++)
        {
            if( st1.find(nums2[i]) != st1.end() && st2.find(nums2[i]) == st2.end())
            {
                st2.insert(nums2[i]);
                res.push_back(nums2[i]); 
            }
        }                          
        return res;
    }
};
