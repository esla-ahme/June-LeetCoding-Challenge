#include <math.h>
#include <bits/stdc++.h>

class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
       
        sort(costs.begin(),costs.end(),greaterThan);
        int mid = costs.size()/2,countA=0,countB=0,cost=0;
        for (vector<int> v : costs)
        {
            //cout<<v[0]<<"   "<<v[1]<<"    "<<v[2]<<endl;
            if (v[0]<=v[1])
            {
                
                if(countA < mid)
                {
                    countA++;
                    cost+=v[0];
                }
                else 
                {
                    countB++;
                    cost+=v[1]; 
                }
            }
            else if(v[0] == v[1])
            {
                if(countA <= countB)
                {
                    countA++;
                    cost+=v[0];
                }
                else
                {
                    countB++;
                    cost+=v[0]; 
                }
            }
            else 
            {
               if(countB < mid)
                {
                    countB++;
                    cost+=v[1];
                }
                else 
                {
                    countA++;
                    cost+=v[0]; 
                } 
            }
        }
        return cost; 
    }
    
    private:
    
    static bool greaterThan(vector<int> &l , vector<int> &r)
    {
        return abs(l[0]-l[1]) > abs(r[0]-r[1]);
    }
};
