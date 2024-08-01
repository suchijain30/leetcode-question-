class Solution {
public:
static bool mycomp(string a , string b)
{
    string t1 = a+b ;
    string t2 = b+a ;
    return t1>t2 ;
}
    string largestNumber(vector<int>& nums) {
        vector<string>v ;
        string ans = "";
        for(int i=0 ; i<nums.size() ; i++)
        {
            v.push_back(to_string(nums[i]));
        }
        sort(v.begin(), v.end(), mycomp);
        if(v[0]=="0")
        {
            return "0";
        }
        for(auto s: v)
        {
            ans = ans+s;
        }
        return ans ;
    }
};