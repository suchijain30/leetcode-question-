class Solution {
public:
void merge_sort(vector<int>& nums, int s , int e)
{
    int mid = s+ (e-s)/2 ;
    int leftarrlen = mid-s +1 ;
    int rightarrlen = e-mid ;

    int * leftarr = new int[leftarrlen];
    int * rightarr = new int [rightarrlen];

    // int k=s;
    for(int i=0 ; i<leftarrlen ; i++)
    {
        leftarr[i]= nums[s+i];
    }
    // k= mid+1 ;
    for(int i=0 ; i<rightarrlen ; i++)
    {
        rightarr[i]= nums[mid+1+i];
    }
    int leftindex =0 ;
    int rightindex=0 ;
    int mainarrindex = s;
    while(leftindex< leftarrlen && rightindex < rightarrlen)
    {
        if(leftarr[leftindex]< rightarr[rightindex])
        {
            nums[mainarrindex]= leftarr[leftindex];
            mainarrindex++ ;
            leftindex++ ;
        }
        else
        {
            nums[mainarrindex]= rightarr[rightindex];
            mainarrindex++ ;
            rightindex++ ;
        }
    }
    while(leftindex<leftarrlen)
    {
        nums[mainarrindex]= leftarr[leftindex];
        mainarrindex++ ;
        leftindex++ ;
    }
    while(rightindex<rightarrlen)
    {
        nums[mainarrindex]= rightarr[rightindex];
        mainarrindex++ ;
        rightindex++ ;   
    }
    delete [] leftarr;
    delete []rightarr;
}
void sortingalgo(vector<int>& nums, int s , int e)
{
    if(s>=e)
    {
        return ;
    }    
    int mid = s+ (e-s)/2 ;

    sortingalgo(nums, s , mid);
    sortingalgo(nums, mid+1 , e);
    merge_sort(nums, s , e);
}
    vector<int> sortArray(vector<int>& nums) {
        int s = 0 ;
        int e = nums.size()-1 ;
        sortingalgo(nums, s , e);
        return nums ;
    }
};