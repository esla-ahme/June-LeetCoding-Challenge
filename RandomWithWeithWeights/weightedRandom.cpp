/*
Date : 10:46AM 6/6/2020
Message : this code caused A time limit exceeded error because it is O(n^2) array length*weight

*/
class Solution {
public:
    vector<int> v;
    Solution(vector<int>& w) {
        int i =0;
        for (int weight : w){
            while(weight--)
            {
                v.push_back(i);
            }
            i++;
        }
    }
    
    int pickIndex() {
        return v[rand()%v.size()];
    }
};


