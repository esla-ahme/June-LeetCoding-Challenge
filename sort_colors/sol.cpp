class Solution {
public:
    void sortColors(vector<int>& nums) {
        int arr[3] ={0};
        for (int a: nums)
            arr[a]++;
        
        int i = 0;
        int k = 0;
        int j = 0;  
        while(i < 3)
        {      
            while(j < arr[i])
            {
                nums[k]=i;
                j++;
                k++;
            }
            i++;
            j =0;
        }
    }
};