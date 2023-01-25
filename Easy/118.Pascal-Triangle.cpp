/**
*Question: https://leetcode.com/problems/pascals-triangle/
*Solution: https://leetcode.com/submissions/detail/884975556/
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalTriangle;
        pascalTriangle.push_back({1});
        if(numRows == 1)
            return pascalTriangle;
        pascalTriangle.push_back({1,1});
        vector<int> prev = pascalTriangle[1];
        for(int i = 3; i <= numRows; i++){
            vector<int> currRow(i, 1);
            for(int j = 1; j < i - 1; j++){
                currRow[j] = prev[j] + prev[j - 1];
            }
            prev = currRow;
            pascalTriangle.push_back(currRow);
        }
        return pascalTriangle;
    }
};