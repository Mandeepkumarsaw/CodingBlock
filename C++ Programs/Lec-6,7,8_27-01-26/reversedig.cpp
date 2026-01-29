#include <iostream>
using namespace std;

int main(){
  int rev=0;  
  int n=123;

  while(n!=0){
    int digit = n%10;
    cout<<digit<<"\n";
    rev = rev*10+digit;
    n/=10;
  }

}