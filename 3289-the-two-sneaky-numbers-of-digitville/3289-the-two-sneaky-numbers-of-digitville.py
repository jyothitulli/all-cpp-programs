class Solution:
    def getSneakyNumbers(self, nums: List[int]) -> List[int]:
        temp=[]
        seen=[]
        for i in nums:
            if i in seen:
                temp.append(i)
            else:
                seen.append(i)
        return temp
