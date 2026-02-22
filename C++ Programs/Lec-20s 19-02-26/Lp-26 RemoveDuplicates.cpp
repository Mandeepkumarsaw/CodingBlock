#include <iostream>
#include<vector>
#include<set>
using namespace std;

class Solution {    
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0; //edge case

        int n=nums.size();
        int i=0;
        for(int j=1;j<n;j++){
            if(nums[i] != nums[j]){     //unique
             i++;             //i = unique pos(i) + 1
             nums[i]=nums[j];   //i ele =replaced by= curr ele tracked by j
            }
        }
        return i+1;

    }
};