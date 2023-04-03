/*'
Question: https://leetcode.com/problems/assign-cookies/
Solution: https://leetcode.com/problems/assign-cookies/submissions/926952185/
*/

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int children = 0, glen = g.size(), slen = s.size(), i = 0, j = 0;
        if(slen == 0)
            return 0;
        sort(s.begin(), s.end());
        sort(g.begin(), g.end());
        while(i < slen && j < glen){
            if(g[j] <= s[i]){
                children++;
                j++;
            }
            i++;
        }
        return children;
    }
};