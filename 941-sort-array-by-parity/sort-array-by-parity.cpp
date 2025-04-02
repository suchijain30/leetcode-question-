class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
    //     int l = 0;
    //     int r = nums.size() - 1;

    //     while (l < r) {
    //     if (nums[l] % 2 == 1 && nums[r] % 2 == 0)
    //         swap(nums[l], nums[r]);
    //     if (nums[l] % 2 == 0)
    //         ++l;
    //     if (nums[r] % 2 == 1)
    //         --r;
    //     }
    //     return nums;
    // }
    int n = nums.size();
    int i=0 , j= n-1 ;
    while(i<j)
    {
        if(nums[i]%2==0)
        {
            i++;
        }
        else
        {
            swap(nums[i], nums[j]);
            j--;
        }
    }
    return nums;
    }
};