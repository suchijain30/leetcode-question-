class Solution {
public:
    string removeStars(string s) {
        stack<char>sta ;
        string ans="" ;
        for(int i=0 ; i<s.length(); i++)
        {
            if(!sta.empty() && s[i]== '*' )
            {
                sta.pop();
            }
            else
            {
                sta.push(s[i]);
            }
        }
        while(!sta.empty())
        {
            ans.push_back(sta.top());
            sta.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};