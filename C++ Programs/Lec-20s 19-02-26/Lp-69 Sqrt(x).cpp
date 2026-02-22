#include <iostream>
#include<vector>
#include<set>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
       if(x==0) return 0;

       int st = 1;
       int end = x;
       int ans = 0;
       while(st <= end) {
        long mid = st + (end-st)/2;

        if(mid*mid <= x){    //done to avoid overflow
            ans = mid;
             st = mid+1;       //right
        }else {
            end = mid-1;      //left
        }
       }
        return ans;
    }
};