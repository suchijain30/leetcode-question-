class Solution {
public:
const int val[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
const string rom[13] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    string intToRoman(int num) {
        string ans = ""; 
        int i = 0;      
        while (num > 0) 
        {
            while (num >= val[i]) 
            {
                ans += rom[i];  
                num -= val[i]; 
            } 
            i++;  // Move to the next Roman value and symbol
        }
    return ans; 
    }
};