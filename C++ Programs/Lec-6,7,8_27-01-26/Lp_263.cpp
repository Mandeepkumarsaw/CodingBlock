#include<iostream>
using namespace std;

class Solution {
public:
    bool isUgly(int n){
        if(n<=0) return false;

        while(n%2==0) n=n/2;
        while(n%3==0) n=n/3;
        while(n%5==0) n=n/5;

      return n==1;        
    }    
};

int main(){
    Solution obj;
    int n=6;
    cout<<n<<" is an ugly number or not---> "<<boolalpha<<obj.isUgly(n);

    return 0;
}