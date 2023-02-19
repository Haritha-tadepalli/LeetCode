/*
Question: https://leetcode.com/problems/add-binary/
Solution: https://leetcode.com/problems/add-binary/submissions/900831803/
*/

class Solution {
public:
    string addBinary(string a, string b) {
        int alen = a.size(), blen = b.size();
        if(alen < blen){
            swap(a, b);
            swap(alen, blen);
        }
        while(blen != alen){
            b = "0" + b;
            blen++;
        }
        string ans = "";
        bool carry = 0;
        for(int i = alen - 1; i >= 0; i--){
            if(a[i] == '1' && b[i] == '1'){
                if(carry)
                    ans = "1" + ans;
                else{
                    ans = "0" + ans;
                    carry = 1;
                }
            }
            else if(a[i] == '0' && b[i] == '0'){
                if(carry){
                    ans = "1" + ans;
                    carry = 0;
                }
                else
                    ans = "0" + ans;
            }
            else{
                if(carry){
                    ans = "0" + ans;
                }
                else
                    ans = "1" + ans;
            }
        }
        if(carry)
            ans = "1" + ans;
        return ans;
    }
};