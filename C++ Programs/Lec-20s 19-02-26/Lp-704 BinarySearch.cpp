#include <iostream>
#include<vector>
#include<set>
using namespace std;

class Solution {           //recursive approach
    int binaryS(vector<int>& nums, int st, int end, int target) {
        if (st > end) return -1;

        int mid = st + (end - st) / 2;

        if (nums[mid] == target) return mid;
        else if (target < nums[mid])
            return binaryS(nums, st, mid - 1, target);  // left half
        else
            return binaryS(nums, mid + 1, end, target); // right half
    }

public:
    int search(vector<int>& nums, int target) {
        return binaryS(nums, 0, nums.size() - 1, target);
    }
}; 


              //ITERATIVE APProach
class Solution {
public:
    int binarySearch(vector<int>& nums, int target) {
        int left=0, right=nums.size()-1;
        while(left<=right){
            int mid = left + (right-left)/2; // avoids overflow
            if(nums[mid]==target) return mid;   // found
            else if(nums[mid]<target) left=mid+1; // search right half
            else right=mid-1; // search left half
        }
        return -1; // not found
    }
};              
