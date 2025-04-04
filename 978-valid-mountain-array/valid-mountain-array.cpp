class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int arrSize = arr.size();
      
        // A mountain array must have at least 3 elements
        if (arrSize < 3) return false;
      
        // Initialize pointers to start and end of the array
        int leftIndex = 0, rightIndex = arrSize - 1;

        // Move leftIndex rightward as long as the next element is greater
        while (leftIndex + 1 < arrSize - 1 && arr[leftIndex] < arr[leftIndex + 1]) {
            ++leftIndex;
        }

        // Move rightIndex leftward as long as the previous element is greater
        while (rightIndex - 1 > 0 && arr[rightIndex] < arr[rightIndex - 1]) {
            --rightIndex;
        }

        // A valid mountain array will have both pointers meet at the same peak index
        return leftIndex == rightIndex;
    }
};