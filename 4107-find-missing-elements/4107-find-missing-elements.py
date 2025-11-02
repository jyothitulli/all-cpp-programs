class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
        mini=min(nums)
        maxi=max(nums)
        empty=[]
        for i in range(mini,maxi):
            if i not in nums:
                empty.append(i)
        return sorted(empty)
               