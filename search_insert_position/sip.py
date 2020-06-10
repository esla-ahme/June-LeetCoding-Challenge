class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        l = 0;
        r = len(nums)
        mid = (l+r)//2
        while(l<r):
            if target == nums[mid]:
                break;
            elif target<nums[mid]:
                r=mid
            else :
                l=mid+1
            mid = (l+r)//2
        
        return mid
