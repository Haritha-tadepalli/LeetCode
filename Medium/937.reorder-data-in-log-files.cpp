/*
Question: https://leetcode.com/problems/reorder-data-in-log-files/
Solution: https://leetcode.com/problems/reorder-data-in-log-files/submissions/907141105/
*/

class Solution {
public:
    static bool cmp(string s1, string s2){
        string word1, word2, x, y;
        stringstream st1(s1); stringstream st2(s2);
        st1>>word1; st2>>word2;
        x = word1; y = word2;
        while(st1>>word1 && st2>>word2){
            if(word1 != word2)
                return word1 < word2;
        }
        if(st1>>word1)
            return false;
        if(st2>>word2)
            return true;
        return x < y;
    }
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<string> letter;
        vector<string> digit;
        for(auto log : logs){
            int x = log.find(" ") + 1;
            if(isalpha(log[x]))
                letter.push_back(log);
            else
                digit.push_back(log);
        }
        sort(letter.begin(), letter.end(), cmp);
        letter.insert(letter.end(), digit.begin(), digit.end());
        return letter;
    }
};