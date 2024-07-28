class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=-1;
        int i=0 ;
        while(i<n)
        {
            if(nums[i]==0)  
            {
                j=i;
                break;
            }
            else
            {
                i++ ;
            }
        }
        if(j!=-1)
        {
            i = j+1 ;
            while(i<n)
            {
                if(nums[i]!=0)
                {
                    swap(nums[i],nums[j]);
                    j++ ;
                }
                else
                {
                    i++ ;
                }
            }
        }
    }
};