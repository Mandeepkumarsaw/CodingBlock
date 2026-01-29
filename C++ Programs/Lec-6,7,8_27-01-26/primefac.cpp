#include <iostream>
using namespace std;

int main(){
 int n=15;

 cout<<"prime factors of "<<n<<" are: ";
  for(int i=2;i<=n;i++){
    while(n%i==0){
        cout<<i<<" ";
        n=n/i;
    }
  }
  return 0;
}