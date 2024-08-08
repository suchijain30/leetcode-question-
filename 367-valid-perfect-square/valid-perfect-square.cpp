class Solution {
public:
    bool isPerfectSquare(int num) {
        long s = 1;          
        long e = num;  
        int ans =- 1;      
        while (s < e) 
        {    
            long mid = s + (e - s) / 2; 
            if(mid * mid == num)
            {
                ans =  mid ;
            }
            if (mid * mid > num) 
            {
                e = mid;
            } 
            else 
            {
                // If mid squared is less than num, we narrow down the lower boundary
                s = mid + 1;
            }
        }
        return ans * ans == num;
    }
};