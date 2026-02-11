#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res;

        for(int i=0;i<nums.size();i++) {
          if(nums[i]<0){
            int ele = abs(nums[i]);
            nums[i] = ele;
          }
        }
        sort(nums.begin(),nums.end());
        for(int j=0;j<nums.size();j++){
            int square = nums[j]*nums[j];
            res.push_back(square);
        }
        
        return res;
    }
};