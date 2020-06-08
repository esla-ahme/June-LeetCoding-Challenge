class Solution(object):
    #this solution usiing 2d array
    def change(self, amount, coins):
        if amount == 0:
            return 1
        if(len(coins) == 0) or amount < coins[0]:
            return 0
        dpList = [([1]+[0]*(amount)) for i in range(len(coins))]
        for i in range(len(coins)):
            for j in range(1,amount+1):
                dpList[i][j] = (dpList[i-1][j] if i-1 >= 0 else 0)+ (dpList[i][j-coins[i]] if j-coins[i] >= 0 else 0) 
        
        return dpList[-1][-1]
       
