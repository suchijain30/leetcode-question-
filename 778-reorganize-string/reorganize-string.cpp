class Solution {
public:
    string reorganizeString(string s) {
        int hash[26] = {0};
        for(int i=0 ; i<s.length(); i++)
        {
            hash[s[i]-'a']++ ;
        }
        //find most frequent char
        char most_ch ;
        int max_freq = INT_MIN ;
        for(int i=0 ; i<26 ; i++ )
        {
            if(hash[i]>max_freq)
            {
                max_freq = hash[i];
                most_ch =  i +'a' ;
            }
        }
        int index=0 ;
        while(max_freq>0 && index <s.length() )
        {
            s[index]= most_ch ;
            max_freq-- ;
            index = index+2 ;
        }
        if(max_freq !=0)
        {
            return "";
        }
        hash[most_ch-'a']=0 ;

        //now place other char
        for(int i=0 ; i<26 ; i++)
        {
            while(hash[i]>0)
            {
                index = index >=s.size() ?1 :index ;
                s[index] = i+'a' ;
                hash[i]-- ;
                index = index+2; 
            }
        }
        return s ;
    }
};