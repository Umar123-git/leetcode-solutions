#
# @lc app=leetcode id=2574 lang=python
#
# [2574] Left and Right Sum Differences
#

# @lc code=start
class Solution(object):
    def leftRightDifference(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        r=[sum(nums[i+1:]) for i,x in enumerate(nums)]
        
        l=[sum(nums[:i]) for i,x in enumerate(nums)]
        print(l)
        print(r)
        r = [abs(x-y) for x,y in zip(l,r)]
        return r
# @lc code=end

