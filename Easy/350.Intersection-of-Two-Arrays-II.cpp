/*
Question: https://leetcode.com/problems/intersection-of-two-arrays-ii/
SOlution: https://leetcode.com/problems/intersection-of-two-arrays-ii/submissions/875182754/
*/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> intersection;
        for(auto x : nums1)
            intersection[x]++;
        for(auto x : nums2){
            if(intersection[x] > 0){
                ans.push_back(x);
                intersection[x]--;
            }
        }
        return ans;
    }
};