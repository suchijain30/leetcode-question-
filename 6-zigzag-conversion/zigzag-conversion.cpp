class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)
        {
            return s;
        }
        vector<string>zigzag(numRows); //s1 row , s2 row, s3 row 
        int i=0 ;  // iteration on given string s
        int row =0 ;
        int direction =1 ;// 1 means traveling top to bottom
        while(true)      // infinite loop chala rahi hu condirion se break karu gi 
        {
            if(direction)  // moving top to bottom
            {
                while(row <numRows && i< s.length())
                {
                    zigzag[row].push_back(s[i]);
                    i++ ;  // moving to next letter
                    row++ ;// moving to next row so can store next letter in next row
                }
                row = numRows-2 ;//row reached 3=numrow and we want to start frorm 1
            }
            else
            { // moving bottom to up from numrows-2 ; 
                while(row>=0 && i<s.size())
                {
                    zigzag[row].push_back(s[i]);
                    i++ ;  // moving to next letter
                    row-- ;
                }
                row =1 ;
            }
            if(i>= s.size())
            {
                break ; // coming out of while loop ;
            }
            direction = !direction ; //changing direction
        }
        string ans ="";
        for(int i=0 ; i<zigzag.size(); i++)
        {
            ans +=zigzag[i];
        }
        return ans;
    }
};