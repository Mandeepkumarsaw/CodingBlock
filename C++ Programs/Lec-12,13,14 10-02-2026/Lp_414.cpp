#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;


class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();

        set<int> s;
        for(int ch:nums){
            s.insert(ch);
            if(s.size()>3) {
            s.erase(s.begin());
           }
        }
        
        return s.size() == 3 ? *s.begin() : *s.rbegin();
    }
};