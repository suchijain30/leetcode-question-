class Solution {
public:
    string makeFancyString(string s) {
        string ans; 
        for (char& currentChar : s) {
            int currentLength = ans.size(); 
            if (currentLength > 1 && ans[currentLength - 1] == currentChar && ans[currentLength - 2] == currentChar) {
                continue;
            }
            ans.push_back(currentChar);
        }
        return ans;
    }
};