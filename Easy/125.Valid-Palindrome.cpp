/**
Question: https://leetcode.com/problems/valid-palindrome/
Solution 1: https://leetcode.com/problems/valid-palindrome/submissions/885613728/
Solution 2: https://leetcode.com/problems/valid-palindrome/submissions/885603758/
*/

//Solution 1
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string rearranged = "";
        for(auto st : s){
            if(isalpha(st) || isdigit(st))
                rearranged.append(1, tolower(st));
        }
        if(rearranged.size() == 0)
            return true;
        int left = 0, right = rearranged.size() - 1;
        while(left <= right){
            if(rearranged[left] != rearranged[right])
                return false;
            else{
                left++;
                right--;
            }
        }
        return true;
    }
};


//Solution 2
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int len = s.size(), left = 0, right = len - 1;
        if(len == 1){
            return true;
        }
        while(left <= right ){
            while(left < len && (!isalpha(s[left]) && !isdigit(s[left])))
                left++;
            while( right >= 0 && (!isalpha(s[right]) && !isdigit(s[right])) )
                right--;
            if(left < len && right >= 0 && tolower(s[left]) != tolower(s[right]))
                return false;
            else{
                left++; right--;
            }
            // cout<<s[left]<<" "<<s[right]<<endl;
        }
        return true;
    }
};