class Solution {
public:
// static string str ;
// static bool compare(char ch1 , char ch2)
// {
//     return (str.find(ch1) < str.find(ch2));
// }
    string customSortString(string order, string str) {
//         str = order ;
//         sort(s.begin(), s.end() , compare);
//         return s ;
//     }


// Create an array to keep count of each character's occurrence in str
        int charCounts[26] = {0};
      
        // Fill the array with the counts of each character
        for (auto ch : str) {
            charCounts[ch - 'a']++;
        }
        // This string will store the result
        string sortedStr;
        // Iterate over the 'order' string and append the characters to 'sortedStr' in the order they appear
        for (auto c : order) {
            while (charCounts[c - 'a']-- > 0) {
                sortedStr += c;
            }
        }
        // Append characters that did not appear in 'order' to the end of 'sortedStr', in their original order
        for (int i = 0; i < 26; ++i) {
            // Check if the character is present in 'str' and was not included via 'order'
            if (charCounts[i] > 0) {
                // Append the character (i + 'a') 'charCounts[i]' times to the 'sortedStr'
                sortedStr += string(charCounts[i], i + 'a');
            }
        }
        // Return the custom sorted string
        return sortedStr;
    }
};
// string Solution::str ;