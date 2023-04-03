/*
Question: https://leetcode.com/problems/successful-pairs-of-spells-and-potions/
Solution: https://leetcode.com/problems/successful-pairs-of-spells-and-potions/submissions/926343272/
*/

class Solution {
public:

    int binarySearch(vector<int> &nums, int l, int r, int spell, long long target){
        int mid, res = r + 1;
        while(l <= r){
            mid = l + (r - l) / 2;
            if((long long)nums[mid] * spell >= target){
                r = mid - 1;
                res = mid;
            }
            else
                l = mid + 1;
        }
        return res;
    }

    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        sort(potions.begin(), potions.end());
        int slen = spells.size(), plen = potions.size();
        for(int i = 0; i < slen; i++){
            int temp = binarySearch(potions, 0, plen - 1, spells[i], success);
            ans.push_back(plen - temp);
        }
        return ans;
    }
};