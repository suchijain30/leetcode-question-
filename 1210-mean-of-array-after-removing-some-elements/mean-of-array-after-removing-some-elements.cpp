class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
      
        int numElements = arr.size();
        double sum = 0; 

        int startIndex = static_cast<int>(numElements * 0.05);
        int endIndex = numElements - startIndex;
      
        for (int i = startIndex; i < endIndex; ++i) {
            sum += arr[i]; 
        }
 
        double trimmedMean = sum / (numElements * 0.9);
      
        return trimmedMean; 
    }
};