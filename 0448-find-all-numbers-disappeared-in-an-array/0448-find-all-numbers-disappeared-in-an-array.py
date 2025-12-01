class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        n=len(nums)+1
        d=set(range(1,n))
        p=set(nums)
        ans=list(d-p)
        return ans