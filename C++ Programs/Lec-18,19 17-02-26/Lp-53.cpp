#include <iostream>
#include<vector>
#include<set>
using namespace std;

class Solution {   //Booyer Moore Voting algo
public:
    int maxSubArray(vector<int>& nums) {
        int numsSum = nums[0];
        int TillMax = nums[0];

        for(int i=1;i<nums.size();i++) {
             numsSum = max(nums[i],numsSum+nums[i]);
             TillMax =  max(TillMax,numsSum);
        }
        return TillMax;
    }
};