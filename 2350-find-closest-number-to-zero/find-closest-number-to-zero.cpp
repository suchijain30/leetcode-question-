class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        // long long int curr = INT_MIN;    
        // long long int  near = nums[0];     
        // // find the element nearest to zero    
        // for ( int i=1; i <nums.size(); i++ ){    
        //     curr = nums[i] * nums[i];     
        //     if ( curr <= (near * near) )  {     
        //         near = nums[i]; 
        //     }     
        // } 
		// return near ;  
        // runtime error- nums[i] ke value int_min hui to multiply par fhaat jayegi
        
        int closestNumber = 0; 
        int mindis = INT_MAX; // This will hold the smallest distance from zero
        for (int i=0 ; i<nums.size(); i++) 
        {
            int distance = abs(nums[i]); 
// current number is closer to zero or it is the positive number in case of a tie
            if (distance < mindis || (distance == mindis && nums[i]>closestNumber)) 
            {
                closestNumber = nums[i]; // Update the closest number
                mindis = distance; // Update the minimum distance
            }
        }
        // After the loop, return the number that is closest to zero
        return closestNumber;
    }
};