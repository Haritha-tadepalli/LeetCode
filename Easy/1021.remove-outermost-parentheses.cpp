/*
Question: https://leetcode.com/problems/remove-outermost-parentheses/
Solution: https://leetcode.com/problems/remove-outermost-parentheses/submissions/917940957/
*/

class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        stack<char> st;
        st.push(s[0]);
        for(int i = 1; i < s.size(); i++){
            if(st.empty())
                st.push(s[i]);
            else if(st.size() == 1 && s[i] == ')')
                st.pop();
            else{
                if(s[i] == ')')
                    st.pop();
                else
                    st.push(s[i]);
                ans += s[i];
            }
        }
        return ans;
    }
};