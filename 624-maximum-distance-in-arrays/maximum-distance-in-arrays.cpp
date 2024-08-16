class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int maxDistance = 0; 
        int minElement = arrays[0][0]; //  1 array min value 
        int maxElement = arrays[0].back(); // max value 

        for (int i = 1; i < arrays.size(); ++i) {

            auto& currentArray = arrays[i];

            int distanceToMin = abs(currentArray[0] - maxElement);

            int distanceToMax = abs(currentArray.back() - minElement);

            maxDistance = max({maxDistance, distanceToMin, distanceToMax});
          
            minElement = min(minElement, currentArray[0]);
          
            maxElement = max(maxElement, currentArray.back());
        }

        return maxDistance;
    }
};