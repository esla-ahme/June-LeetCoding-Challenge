class Solution:
    v = []
    def __init__(self, w: List[int]):
        for i in range(1,len(w)):
            w[i] += w[i-1]
        self.v = w
        
    

    def pickIndex(self) -> int:     
        return bisect_left(self.v, random.random()*self.v[-1])


