#include<iostream>
#include<unordered_set>
using namespace std;

class Solution{
public:


    int helper(int n){
     int sum =0;
         while(n>0){
            int rem = n%10;
            n = n/10;
            sum += rem*rem;
           }
           return sum;

    }

     bool isHappy(int n){
      unordered_set<int> seen;

      while(n!=1 && !seen.count(n)){
            seen.insert(n);
            n=helper(n);
      }
      return n==1;
     }    
};

int main(){
    Solution obj;
    int n=19;
    cout<<n<<" is Happy number or not--> ";
    cout<<boolalpha<<obj.isHappy(n);

    return 0;
}