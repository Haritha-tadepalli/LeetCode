/*
Question: https://leetcode.com/problems/find-the-longest-balanced-substring-of-a-binary-string/
Solution: https://leetcode.com/problems/find-the-longest-balanced-substring-of-a-binary-string/submissions/926316020/
*/

class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int len = s.size();
        if(len == 0)
            return 0;
        int zeroCount = 0, maxCount = 0, oneCount = 0;
        for(int i = 0; i < len; i++){
            if(s[i] == '0' && oneCount != 0){
                maxCount = max(maxCount, 2 * min(zeroCount, oneCount));
                zeroCount = 1;
                oneCount = 0;
            }
            else if(s[i] == '1')
                oneCount++;
            else if(s[i] == '0'){
                zeroCount++;
            }
        }
        return max(maxCount, 2 * min(zeroCount, oneCount));
    }
};