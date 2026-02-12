#include <iostream>
#include<vector>
#include<set>
using namespace std;


class Solution {
    void mergesort(vector<int>& nums,int st,int end) {

     if(st < end) {
        int mid = st+ (end -st)/2;
        //left half
        mergesort(nums,st,mid);
        //right half
        mergesort(nums,mid+1,end);

        merge(nums,st,mid,end);
     }
    }


   void merge(vector<int>& nums,int st,int mid, int end) {
     vector<int> temp;
     int i=st;          //Left st
     int j=mid+1;       //Right st 

     while(i<=mid && j<=end){
        if(nums[i] > nums[j]) {
             temp.push_back(nums[j]);
             j++;
        } else {
            temp.push_back(nums[i]);
            i++;
        }
     }  

     //LeftOver for LEFT SUBARRAy
     while(i<=mid){
        temp.push_back(nums[i]);
        i++;
     }
     

     //LeftOver for RIGHT SUBAARAY
     while(j<=end) {
        temp.push_back(nums[j]);
        j++;
     }


    //copy ele to Original NUMS array 
    for(int idx=0; idx<temp.size(); idx++) {
       nums[idx+st] = temp[idx];     //Main func
    }
   }

public:
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);

        return nums;
    }
};