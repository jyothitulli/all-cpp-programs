class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxx=0
        mini=prices[0]
        for i in range(len(prices)):
            mini=min(mini,prices[i])
            maxx=max(maxx,prices[i]-mini)
        return maxx

