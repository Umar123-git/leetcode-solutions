/*
 * @lc app=leetcode id=1523 lang=cpp
 *
 * [1523] Count Odd Numbers in an Interval Range
 */

// @lc code=start
class Solution {
public:
    int countOdds(int low, int high) {
        double c=0.0;

       // for(int i=low ; i<=high ; i++){
       //     if(i%2==1)c++;
       // }
    if(low%2==0 && high%2==0){
        c=(high-low)/2;
        return c;
       }

       else{
        c=((high-low)-2.0)/2.0;
        c+=2.0;
        int r=c;
        return r;
       }
       
        return c;
    }
};
// @lc code=end

