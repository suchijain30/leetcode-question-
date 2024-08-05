class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string, int> freq;

        // Count the frequency of each string in the array.
        for (auto value : arr) {
            freq[value]++;
        }

        for (auto value : arr) {
            // Check if the current string is distinct (frequency is 1).
            if (freq[value] == 1) {
                // Decrement k and check if we have found the k-th distinct string.
                --k;
                if (k == 0) {
                    // If k reaches 0, the current string is the k-th distinct string.
                    return value;
                }
            }
        }

        // If the k-th distinct string is not found, return an empty string.
        return "";
    }
};