/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int s =0 ;
        int e = n ;
        int mid = s + (e-s)/2 ;
        while(s<e)
        {
            if(guess(mid)<= 0)
            {
                e = mid ;
            }
            else
            {
                s= mid+1 ;
            }
           mid = s + (e-s)/2 ; 
        }
       return s ; 
    }
};