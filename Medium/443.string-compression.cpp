/*
Question: https://leetcode.com/problems/string-compression/
Solution: https://leetcode.com/problems/string-compression/submissions/907538474/
*/

class Solution {
public:
    int compress(vector<char>& chars) {
        int count = 1;
        vector<char> compressed;
        char curr = chars[0];
        for(int i = 1; i < chars.size(); i++){
            if(curr == chars[i])
                count++;
            else{
                compressed.push_back(curr);
                if(count > 1){
                    for(auto x : to_string(count))
                        compressed.push_back(x);
                }
                count = 1;
                curr = chars[i];
            }
        }
        compressed.push_back(curr);
        if(count > 1){
            for(auto x : to_string(count))
                compressed.push_back(x);
            chars.clear();
        }
        chars.insert(chars.begin(), compressed.begin(), compressed.end());
        return compressed.size();
    }
};