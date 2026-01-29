#include<iostream>
using namespace std;

class Solution{
public:
     int numberOfSteps(int num) {
        int count = 0;

        while(num != 0){
            if(num%2==0){
                num = num/2;
            } else {
                num = num-1;
            }
            count = count+1;
        }
        return count;
     }    
};

int main(){
   Solution obj;
   int n=14;
   cout<<"Total count of steps until reaches to 0: "<<obj.numberOfSteps(n);

   return 0;
}