class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int a = 0;
        int b = 0;
        for (const int bill : bills) 
        {
            if (bill == 5) 
            {
                ++a;
            } 
            else if (bill == 10) 
            {
                --a;
                ++b;
            }  
            else 
            {  // bill == 20
                if (b > 0) 
                {
                    --b;
                    --a;
                } 
                else 
                {
                    a -= 3;
                }
            }
        if (a < 0)
            return false;
        }
    return true;
    }
};