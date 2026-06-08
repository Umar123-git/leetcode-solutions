#
# @lc app=leetcode id=2161 lang=python
#
# [2161] Partition Array According to Given Pivot
#

# @lc code=start
class Solution(object):
    def pivotArray(self, nums, pivot):
        """
        :type nums: List[int]
        :type pivot: int
        :rtype: List[int]
        """
        l = list(filter(lambda x: x<pivot, nums))
        r = list(filter(lambda x: x>pivot, nums))
        e = list(filter(lambda x: x==pivot, nums))

        return(l+e+r)
        
# @lc code=end

