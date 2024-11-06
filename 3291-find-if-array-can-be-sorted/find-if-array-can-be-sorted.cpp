class Solution {
public:
    bool canSortArray(vector<int>& nums) {
    vector<int> b;
    int maxi = *max_element(nums.begin(), nums.end());
    int size = nums.size() - 1;
    
    // Count the number of set bits for each element in nums
    for (int i = 0; i < nums.size(); i++) {
        int n = nums[i];
        int count = 0;
        while (n > 0) {
            int bit=  n % 2;  // Increment count if the last bit is 1
            if(bit ==1)
            {
                count++ ;
                n= n/2 ;
            }
            else
            {
                n /= 2;
            }
        }
        b.push_back(count);
    }
    
    // Sort nums based on set bit counts in b using bubble sort logic
    for (int i = 0; i < nums.size()-1 ; i++) {
        for (int j = 0; j < nums.size() - i-1 ; j++ ) {
            if (nums[j] > nums[j + 1] && b[j] == b[j + 1]) {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
    
    // Check if the maximum element is at the last position
    if(nums.size()==1)
    {
        return true ;
    }
    else{
    int l=0 ;
    while(l<nums.size()-1)
    {
        if(nums[l]<=nums[l+1])
        {
            l++;
        }
        else
        {
            break ;
        }
    }
    if(l==nums.size()-1)
    {
        return true ;
    }
    else
    {
        return false;
    }
    }
}
};