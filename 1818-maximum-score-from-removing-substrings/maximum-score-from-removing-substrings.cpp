class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int sum = 0;
        stack<char> stk1, stk2;
        if (y > x) 
        {  //"ba"
            for (int i=0 ; i<s.length(); i++) 
            {
                if (!stk1.empty() && stk1.top() == 'b' && s[i] == 'a') 
                {   
                    stk1.pop();
                    sum += y;
                } 
                else 
                {
                    stk1.push(s[i]);
                }
            }
        // remaining for "ab"
            while (!stk1.empty()) 
            {
                char ch = stk1.top();
                stk1.pop();
                if (!stk2.empty() && stk2.top() == 'b' && ch == 'a') 
                {
                    stk2.pop();
                    sum += x;
                } 
                else 
                {
                    stk2.push(ch);
                }
            }
        } 
        else 
        {
        // Maximize "ab" first
            for (int i=0 ; i<s.length(); i++) 
            {
                if (!stk1.empty() && stk1.top() == 'a' && s[i] == 'b') 
                {
                    stk1.pop();
                    sum += x;
                } 
                else 
                {
                    stk1.push(s[i]);
                }
            }
        //  remaining for "ba"
            while (!stk1.empty()) 
            {
                char ch = stk1.top();
                stk1.pop();
                if (!stk2.empty() && stk2.top() == 'a' && ch == 'b') 
                {
                    stk2.pop();
                    sum += y;
                } 
                else 
                {
                    stk2.push(ch);
                }
            }
        }
        return sum ;
    }
};