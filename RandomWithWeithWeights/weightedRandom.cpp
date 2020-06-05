class Solution {
public:
    vector<int> v;
    /*
        if w = [1,2,3]
        v will be [1,3,6]
    */
    Solution(vector<int>& w) {
        //get perfix sum
        v.resize(w.size());
        v[0] = w[0];
        for (int i = 1 ; i < w.size() ; i++)
            v[i] = v[i-1] + w[i];
        
    }
    
    /*
     get random number from 0 : 5 
     0 -> 1 with index 0
     1,2 -> 3 which index is 1
     3,4,5 -> 6 which index is 2 
    */
    
    int pickIndex() {
        // get ranom number in range of the psum array
        int rNum = rand()%v.back();
        // get iterator points to the location of the picked number
        //upper_bound function handle this mapping
        auto it = upper_bound(v.begin(),v.end(),rNum);
        // get the index of the picked number 
        int index = it - v.begin();
        return index;
    }
};
