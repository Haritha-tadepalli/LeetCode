/*
Question: https://leetcode.com/problems/merge-intervals/
Solution: https://leetcode.com/problems/merge-intervals/submissions/924226606/
*/

class Solution {
public:
    static bool cmp(vector<int> a, vector<int> b){
        return a[0] < b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end(), cmp);
        int len = intervals.size();
        for(int i = 0; i < len; i++){
            int j = i + 1;
            while(j < len && (intervals[j][0] <= intervals[i][1] && intervals[i][1] >= intervals[j][0])){
                intervals[i][0] = min(intervals[i][0], intervals[j][0]);
                intervals[i][1] = max(intervals[i][1], intervals[j][1]);
                j++;
            }
            ans.push_back(intervals[i]);
            i = j - 1;
        }
        return ans;
    }
};