class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int kitna_kaam_h =0 ;
        int balance =0 ;
        int start =0 ; // index where we are staring 
        for(int i=0 ; i<gas.size(); i++) //checking each index ke vo anser h ke nahi 
        {
            balance = balance + gas[i] - cost[i];
            if(balance<0)
            {
                kitna_kaam_h += abs(balance) ;
                start = i+1 ;
                balance =0 ;
            }
        }
        if(balance - kitna_kaam_h >=0)
        {
            return start ;
        }
        else
        {
            return -1 ;
        }
    }
};