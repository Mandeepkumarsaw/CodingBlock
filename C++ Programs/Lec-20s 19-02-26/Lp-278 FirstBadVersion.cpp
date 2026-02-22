#include <iostream>
#include<vector>
#include<set>
using namespace std;

 // The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
    int isBadVersion(int x){
        return x;
    }
public:
    int firstBadVersion(int n) {
        
        int left =1;
        int right = n;
        while(left <= right){
            long mid = left + (right-left)/2;
           if(isBadVersion(mid)){
             right = mid;     //left
           } else { 
            left = mid + 1;      //right
           }
        }
        return left;
    }
};