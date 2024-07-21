class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        const int totalMinutesInDay = 24 * 60;
        int n = timePoints.size();
        vector<int>ans ;
        vector<int>res ; 
        for (auto time : timePoints) {
            int hour = stoi(time.substr(0, 2));
            int minute = stoi(time.substr(3));
            ans.push_back(hour * 60 + minute);
        }
        sort(ans.begin(), ans.end());
        ans.push_back(ans[0] + totalMinutesInDay); // comparing 000 
        int diff = totalMinutesInDay ;
        for (int i = 0; i < ans.size()-1; ++i) {
            diff = min(diff, abs(ans[i] - ans[i +1]) );
        }
        return diff;
    }
};