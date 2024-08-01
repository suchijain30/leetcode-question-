class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count =0 ;
        for(int i=0 ; i<details.size() ; i++)
        {
            string a = details[i];
            string substring = a.substr(11, 2);
            int b = stoi(substring);
            if(b>60)
            {
                count++;
            }
        }
        return count ;
    }
};