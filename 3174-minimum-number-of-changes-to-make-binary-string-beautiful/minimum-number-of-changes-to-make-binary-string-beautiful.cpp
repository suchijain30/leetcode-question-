class Solution {
public:
    int minChanges(string s) {
       int i=0 ;
       int j= 1 ;
       int count =0 ;
       while(j< s.length())
       {
        if(s[i]==s[j])
        {
            i= i+2 ;
            j= j+2 ;
        }
        else
        {
            count++ ;
            i= i+2 ;
            j= j+2 ;
        }
       }
       return count;
    }

};