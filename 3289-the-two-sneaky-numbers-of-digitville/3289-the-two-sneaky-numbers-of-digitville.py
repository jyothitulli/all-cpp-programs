class Solution:
    def getSneakyNumbers(self, nums: List[int]) -> List[int]:
        temp=[]
        for i in nums:
            if nums.count(i) >1 and i not in temp:
                temp.append(i)
        return temp
