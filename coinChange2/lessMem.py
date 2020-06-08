class Solution(object):
    
    def change(self, amount, coins):
        if amount == 0:
            return 1
        if(len(coins) == 0) or amount < coins[0]:
            return 0
        
        dpList = [0 for i in range(amount+1)]
        dpList[0] = 1
        for j in range(0,len(coins)):
            for i in range(1,amount+1):
                dpList[i]+= dpList[i-coins[j]] if i-coins[j] >-1 else 0
        
        return dpList[-1]
            
        
       
