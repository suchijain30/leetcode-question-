class Solution {
public:
int convert(string s) 
{ 
    int num = 0; 
    int n = s.length(); 
    for (int i = 0; i < n; i++) 
    {
        // Subtract 48 from the current digit 
        num = num * 10 + (int(s[i]) - 48); 
    }
    return num;
} 
    int countSeniors(vector<string>& details) {
        int count =0 ;
        for(int i=0 ; i<details.size() ; i++)
        {
            string a = details[i];
            string substring = a.substr(11, 2);
            int b = convert(substring);
            if(b>60)
            {
                count++;
            }
        }
        return count ;
    }
};