/*
Question: https://leetcode.com/problems/reverse-vowels-of-a-string/
Solution: https://leetcode.com/problems/reverse-vowels-of-a-string/submissions/908263268/
*/

class Solution {
public:
    string reverseVowels(string s) {
        int len = s.size(), l = 0, r = len - 1;
        vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        while(l < r){
            if(find(vowels.begin(), vowels.end(), s[l]) == vowels.end()){
                l++;
                continue;
            }
            if(find(vowels.begin(), vowels.end(), s[r]) == vowels.end()){
                r--;
                continue;
            }
            swap(s[l], s[r]);
            l++; r--;
        }
        return s;
    }
};