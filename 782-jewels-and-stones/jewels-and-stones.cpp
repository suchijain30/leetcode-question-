class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int hash[256]={0};
        int count =0 ;
        for(auto s: jewels)
        {
            hash[s]++;
        }
        for(auto str : stones)
        {
            if(hash[str])
            {
                count++ ;
            }
        }
        return count ;
    }
};