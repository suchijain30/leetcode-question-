class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    int n = intervals.size();
    if (n <= 1) return 0;
    sort(intervals.begin(), intervals.end(), 
    [](const vector<int>& a, const vector<int>b)      {
        return a[1] < b[1];
    });

    vector<int> start;
    vector<int> end;
    for(int i=0; i<n; i++) {
        start.push_back(intervals[i][0]);
        end.push_back(intervals[i][1]);
    }

    int count = 1; 
    int last_end_value = end[0]; 
    for(int i=1; i<n; i++) {
        if(start[i] >= last_end_value) {
            count++;
            last_end_value = end[i]; // Update the tracker
        }
    }
    return n - count;
    }
};