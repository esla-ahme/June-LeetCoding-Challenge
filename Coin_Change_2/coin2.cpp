class Solution {
public:
    int change(int amount, vector<int>& coins) {
       if (amount == 0)
            return 1;
        if(coins.size() == 0 || amount < coins[0])
            return 0;
        
        vector<int> arr(amount+1,0);
        arr[0]=1;
        for (int coin : coins)
            for (int i = 1 ; i <amount+1; i++)
                arr[i] += (i-coin >=0)? arr[i-coin]:0;
        
        return arr[amount];
        
    }
};
