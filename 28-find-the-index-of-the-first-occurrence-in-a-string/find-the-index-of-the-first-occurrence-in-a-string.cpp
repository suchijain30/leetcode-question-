class Solution {
public:
    int strStr(string haystack, string needle) {
        const int m = haystack.length();
    const int n = needle.length();

    // for (int i = 0; i < m ; i++){
    //   if (haystack.substr(i, n) == needle){  // i is starting point and n is length 
    //     return i;
    //     }
    // }
    // return -1;


    //suing sliding window 
    for(int i=0 ; i<=m-n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(needle[j] != haystack[i+j])
            {
                break ;
            }
            else
            {
                if(j== n-1)
                    return i ;
            }
        }
    }
    return -1 ;
  }
};