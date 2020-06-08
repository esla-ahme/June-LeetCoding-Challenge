class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector<vector<int>> queue;
        sort(people.begin(),people.end(),lessThan);
        for (int i = people.size()-1 ; i >= 0 ; i--)
        {
            queue.insert(queue.begin()+people[i][1],people[i]);
        }
        
        return queue;
    }
    private:
    
   static bool lessThan(vector<int> &l , vector<int> &r)
    {
        
        if (r[0] == l[0])
            return l[1]>r[1];
            
            return l[0]<r[0];
    }
};