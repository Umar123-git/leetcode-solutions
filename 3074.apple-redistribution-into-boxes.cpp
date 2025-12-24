/*
 * @lc app=leetcode id=3074 lang=cpp
 *
 * [3074] Apple Redistribution into Boxes
 */

// @lc code=start
class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int s=0;
        for(int i : apple){
            s+=i;
        }

        sort(capacity.begin(), capacity.end(), greater<int>());

        int c=0;

        int i=0;
        while(s>0 && i<capacity.size()){
            s-=capacity[i];
            i++;
            c++;
        }

        return c;
    }
};
// @lc code=end

