class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string>s ;
        // s.push("+");
        // int count =0 ;
        for(int i=0 ; i<logs.size(); i++)
        {
            if( logs[i]=="../")
            {
                if(!s.empty()){
                s.pop(); }
            }
            else if(logs[i]== "./")
            {
                continue ;
            }
            else
            {
                s.push(logs[i]);
            }
        }
        if(!s.empty())
        {
            return s.size();
        }
        else
        {
            return 0 ;
        }   
    }
};