/*
Question: https://leetcode.com/problems/first-unique-character-in-a-string/
Solution: https://leetcode.com/problems/first-unique-character-in-a-string/submissions/874804753/
*/

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> count;
        for(auto x : s)
            count[x]++;
        vector<int> index;
        for(auto x : count){
            if(x.second == 1)
                index.push_back(find(s.begin(), s.end(), x.first) - s.begin());
        }
        if(index.size() == 0)
            return -1;
        return *min_element(index.begin(), index.end());
    }
};