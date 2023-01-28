/*
Question: https://leetcode.com/problems/longest-common-prefix/
Solution: https://leetcode.com/problems/longest-common-prefix/submissions/886682707/
*/


class Solution {
public:
    static bool cmp(string a, string b){
        return a.size() < b.size();
    } 

    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end(), cmp);
        string prefix = strs[0];
        int len = prefix.size();
        for(int i = 1; i < strs.size(); i++){
            if(len == 0)
                break;
            while(strs[i].substr(0, len) != prefix && len >= 0){
                prefix.pop_back();
                len--;
                
            }
        }
        return prefix;
    }
};