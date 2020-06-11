class Solution:
    def sortColors(self, nums: List[int]) -> None:
        lst = [0,0,0]
        for n in nums:
            lst[n] +=1
        print(lst)
        j = 0
        i = 0
        for n in lst:
            nums[i:i+n] = [j]*n
            print(nums)
            i += n
            j+=1