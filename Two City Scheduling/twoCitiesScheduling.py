class Solution:
    def takeGreater(self,hahaha):
        return abs(hahaha[0]-hahaha[1])
        
    def twoCitySchedCost(self, costs: List[List[int]]) -> int:
        costs.sort(key = self.takeGreater, reverse = True)
        for s in costs:
            print(s[0]-s[1])
        cost    =            0
        mid     = len(costs)/2
        countA  =            0
        countB  =            0
        for v in costs:
            if v[0] < v[1]:
                if countA < mid:
                    countA += 1
                    cost+=v[0]
                else:
                    countB += 1
                    cost+=v[1]              
            elif v[0] == v[1]:
                if countA <= countB:
                    countA += 1
                    cost+=v[0]
                else:
                    countB += 1
                    cost+=v[0] 
            else:
                if countB < mid:
                    countB += 1
                    cost+=v[1]
                else:
                    countA += 1
                    cost+=v[0]   
        return cost
