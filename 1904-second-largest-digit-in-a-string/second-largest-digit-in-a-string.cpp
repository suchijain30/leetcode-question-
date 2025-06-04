class Solution {
public:
    int secondHighest(string s) {
        std::set<int> digits;  // set in C++ stores unique elements in sorted order.
    
        for (char c : s) {
            if (isdigit(c)) {
                digits.insert(c - '0');  // convert char to int
            }
        }

        if (digits.size() < 2) 
            return -1;

        // Remove the largest element
        auto it = digits.rbegin(); // reverse iterator: largest first
        ++it; // second largest
        return *it;
    }
};