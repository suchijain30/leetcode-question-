class Solution {
public:
    string decodeMessage(string key, string message) {
       char start = 'a';
       char hash[260]= {0};
       for(auto ch : key)
       {
        if(ch != ' ' && hash[ch]==0)
        {
            hash[ch]= start ;
            start++ ;
        }
       } 
       string ans = "";
       for(int i=0 ; i<message.length(); i++)
       {
        char ch = message[i];
        if(ch == ' ')
        {
            ans.push_back(ch);
        }
        else
        {
        char decode_char = hash[ch];
        ans.push_back(decode_char);
        }
       }
       return ans ; 
    }
};