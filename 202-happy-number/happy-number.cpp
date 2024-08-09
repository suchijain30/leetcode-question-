class Solution {
public:
int numSquareSum(int n) {
    int num = 0;
    while (n != 0) {
        int digit = n % 10;
        num += digit * digit;
        n /= 10;
    }
    return num;
}
    bool isHappy(int n) {
    set<int> st;
    while (1)
    {
        n = numSquareSum(n);
        if (n == 1)
        {
            return true;
        }
        if (st.find(n) != st.end()) // if n is found 
        {
            return false;
        }
        st.insert(n);
    }

    // st.find(n) function tries to find the element n in the st container. If n is found, it returns an iterator pointing to the element; if not, it returns an iterator to st.end().

    // != st.end(): This checks if the iterator returned by st.find(n) is not equal to st.end(). If it's not equal, it means n was found in st.
    }
};