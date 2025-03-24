class Solution {
    public:
        int countDays(int days, vector<vector<int>>& meetings) {
            sort(meetings.begin(), meetings.end());
            int prev_end{0};
    
            for(int i{0}; i < meetings.size(); ++i) {
                int start = meetings[i][0];
                int end = meetings[i][1];
    
                start = max(start, prev_end + 1);
                int length = end - start + 1;
                days -= max(length, 0);
                prev_end = max(prev_end, end);
            }
            return days;
        }
    };