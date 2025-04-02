class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        lst = {}
        for i,v in enumerate(nums):
            diff = target - v
            if diff in lst:
                return i,lst[diff]
            lst[v]=i