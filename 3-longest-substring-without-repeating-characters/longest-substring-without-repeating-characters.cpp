class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0)
        {
            return 0 ;
        }
        int maxans = INT_MIN;
        unordered_set < int > set;
        int l = 0;
        for (int r = 0; r < s.length(); r++) 
        {
            if (set.find(s[r]) != set.end()) //if duplicate element is found
            {
            while (l < r && set.find(s[r]) != set.end()) {
                set.erase(s[l]);
                l++;
            }
            }
            set.insert(s[r]);
            maxans = max(maxans, r - l + 1);
        }
        return maxans;
    }
};