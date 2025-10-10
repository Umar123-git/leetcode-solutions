/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
#include <algorithm>
#include <vector>
#include<iostream>
#include <iomanip> 
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int w=height.size(),area=INT16_MIN,heit,wid,tarea,l=0,r=w-1;
        if (w == 2) return min(height[0], height[1]);
        if(w==1){return 0;}

        while(l<r)
        {
            heit=min(height[l],height[r]);
            wid=r-l;
            tarea=heit*wid;

            area=max(tarea,area);

            if(height[l]<height[r])
            {
                l++;
            }else{
                r--;
            }

        }

        
        return area;
    }
};
// @lc code=end

