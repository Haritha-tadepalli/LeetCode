/*
Question: https://leetcode.com/problems/valid-parentheses/
Solution: https://leetcode.com/problems/valid-parentheses/submissions/844571072/
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if(s.size() == 1)
            return false;
        if(s[0] == ')' || s[0] == '}' || s[0] == ']')
            return false;
        stack<char> braces;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '[' || s[i] == '{' || s[i] == '(')
                braces.push(s[i]);
            else if(braces.empty() && (s[i] == ')' || s[i] == '}' || s[i] == ']'))
                return false;
            else{
                if((s[i] == '}' && braces.top() == '{') || (s[i] == ']' && braces.top() == '[') || (s[i] == ')' && braces.top() == '('))
                    braces.pop();
                else
                    return false;
            }
        }
        return braces.empty();
    }
};