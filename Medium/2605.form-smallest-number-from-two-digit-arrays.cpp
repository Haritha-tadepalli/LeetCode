/*
Question: https://leetcode.com/problems/form-smallest-number-from-two-digit-arrays/
Solution: https://leetcode.com/problems/form-smallest-number-from-two-digit-arrays/submissions/925989311/
*/

class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        vector<int> index(100, -1);
        sort(nums1.begin(), nums1.end());
        for(int i = 0; i < nums2.size(); i++)
            index[nums2[i]] = 1;
        for(int i = 0; i < nums1.size(); i++){
            if(index[nums1[i]] != -1)
                return nums1[i];
        }
        int one = *min_element(nums1.begin(), nums1.end());
        int two = *min_element(nums2.begin(), nums2.end());
        return min(one, two) * 10 + max(one, two);
    }
};