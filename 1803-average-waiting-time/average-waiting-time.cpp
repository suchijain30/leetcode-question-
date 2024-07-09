class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double Waittime = 0; 
        int currtime = 0;  
        for (int i = 0; i < customers.size(); ++i) 
        {
            int arrivaltime = customers[i][0];
            int ordertime = customers[i][1];
            currtime = max(currtime, arrivaltime) + ordertime;
            
            Waittime += currtime - arrivaltime;
        }
        return Waittime / customers.size();
    }
};