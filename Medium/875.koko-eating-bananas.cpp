/*
Question: https://leetcode.com/problems/koko-eating-bananas/
Solution: https://leetcode.com/problems/koko-eating-bananas/submissions/911292925/
*/

class Solution {
public:

    long long timetaken(vector<int>& piles, long long k){
        long long time = 0;
        for(auto pile : piles){
            if(pile <= k)
                time++;
            else{    
                time += pile / k;
                if(pile % k != 0)
                    time++;
            }
        }
        return time;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        long long mid, l = 1, r = *max_element(piles.begin(), piles.end()), k = r, time;
        while(l <= r){
            mid = l + (r - l) / 2;
            time = timetaken(piles, mid);
            if(time <= h){
                r = mid - 1;
                k = min(mid, k);
            }
            else 
                l = mid + 1;
        }
        return k;
    }
};