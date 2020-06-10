class Solution {
public:
    //I supposed to solve it by binary search like I did in Python but I am too lazy to repeat my self so I used a std function achieve the same result ;)
    int searchInsert(vector<int>& nums, int target) {
        return lower_bound(nums.begin(),nums.end(),target)-nums.begin();
    }
};
