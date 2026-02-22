#include <iostream>
#include<vector>
#include<set>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n,1);


      //prefix product
     int prefix = 1;
     for(int i=0;i<n;i++) {
        res[i] = prefix;            
        prefix *= nums[i];
     }                           //FINAL-  res=[1,1,2,6]

     //suffix product
     int suffix=1;                //FINAL- res[24,12,4,1]
     for(int i=n-1;i>=0;i--){
        res[i]  *= suffix;     // * -> this is an imp bcoz we have to multiple ele of res that are previously present(preffix) * curr ele(suffix)    ie  res[24*1, 12*1, 4*2, 6*1]
        suffix *= nums[i];
     }

     return res;

    }
};