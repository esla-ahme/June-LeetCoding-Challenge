class Solution:
    def reverseString(self, s: List[str]) -> None:
        # we can simply use s.reverse()
        j = len(s)-1
        for i in range(ceil(len(s)/2)):
            
            s[i],s[j] = s[j],s[i]
            j-=1
