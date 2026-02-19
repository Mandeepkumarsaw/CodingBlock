#include <iostream>
#include<vector>
#include<set>
using namespace std;


class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = 0;
        int totalCost = 0;

        for(int i=0;i<gas.size();i++){
            totalGas += gas[i];
        }

         for(int i=0;i<cost.size();i++){
            totalCost += cost[i];
        }

        if(totalGas < totalCost) return -1;
 
      //unique sol always exist
        int st=0;
        int CG=0;      //currgas
        for(int i=0;i<gas.size();i++){
         CG += (gas[i]-cost[i]);     
         if(CG < 0){
            st = i+1;
            CG=0;
         }

        }
        return st;
    }
};