class Solution {
public:
    string reverseParentheses(string s) {
        int n = s.size(); 
        vector<int>p(n); 
        stack<int> sta; 
        for (int i = 0; i <n; i++) {
            if (s[i] == '(') 
            {
                sta.push(i);
            } 
            else if (s[i] == ')') 
            {
                int matchedIndex = sta.top();
                sta.pop();
                p[i] = matchedIndex; // Set the pair for ')'.
                p[matchedIndex] = i; // Set the pair for '('.
            }
        }

        string result; 
        int index = 0; 
        int direction = 1; // Direction of traversal. 1 for forward, -1 for backward.
        while (index < n) {
            if (s[index] == '(' || s[index] == ')') {
                
                index = p[index];
                direction = -direction;
            } else {
                result.push_back(s[index]);
            }
            index += direction; // Move in the current direction.
        }

        return result; // Return the final reversed string.
    }
};