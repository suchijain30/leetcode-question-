class Solution {
public:
// int hash_function(int key)
// {
//     return (key %)
// }
    bool containsDuplicate(vector<int>& nums) {
        signed int n = nums.size();
    //     int hash[256]={0};
    //     for(auto i : nums)
    //     {
    //         hash[i]++ ;
    //     }
    //     for(auto j :nums)
    //     {
    //         if(hash[j] >= 2)
    //         {
    //             return true  ;
    //             break ;
    //         }
    //     }
    //     return false  ;
    // }
    set<int> s;

    for (const int num : nums)
      if (!s.insert(num).second)
        return true;

    return false;
  }
};