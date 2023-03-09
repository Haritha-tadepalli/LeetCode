/*
Question: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
Solution: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/submissions/908220214/
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int len = needle.size(), halen = haystack.size();
        if(len >= halen){
            if(haystack == needle)
                return 0;
            return -1;
        }
        for(int i = 0; i < halen - len + 1; i++){
            if(haystack.substr(i, len) == needle){

                return i;
            }
        }
        return -1;
    }
};