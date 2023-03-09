/*
Question: https://leetcode.com/problems/intersection-of-two-arrays/
Solution: https://leetcode.com/problems/intersection-of-two-arrays/submissions/911297122/
*/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, bool> ispresent;
        vector<int> ans;
        for(auto x : nums1){
            ispresent[x] = true;
        }
        for(auto x : nums2){
            if(ispresent.find(x) != ispresent.end()){
                if(ispresent[x]){
                    ans.push_back(x);
                    ispresent[x] = false;
                }
            }
        }
        return ans;
    }
};