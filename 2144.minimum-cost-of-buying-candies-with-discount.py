#
# @lc app=leetcode id=2144 lang=python
#
# [2144] Minimum Cost of Buying Candies With Discount
#

# @lc code=start
class Solution(object):
    def minimumCost(self, cost):
        """
        :type cost: List[int]
        :rtype: int
        """
        cost.sort(reverse=True)
        #print(cost)
        s = 0
        
        for i,x in enumerate(cost):
            #print(i, x)
            if (i+1)%3!=0:
                s+=x
                #print(i, s)

        return s
        
# @lc code=end

