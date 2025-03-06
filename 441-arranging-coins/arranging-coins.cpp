class Solution {
public:
    int arrangeCoins(int n) {
        int count = 0;
        int i = 1; // Start from 1, not 2
        while (n >= i) { // Check if we can form the next row
            n -= i; 
            count++;
            i++;
        }
        return count;
    }
};