/*
Question: https://leetcode.com/problems/reverse-string/
Solution: https://leetcode.com/problems/reverse-string/submissions/875184020/
*/

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0, right = s.size() - 1;
        while(left < right){
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};