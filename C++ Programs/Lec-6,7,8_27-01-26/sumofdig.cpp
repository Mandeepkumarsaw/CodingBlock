#include <iostream>
using namespace std;

int main(){
    int ans=0;
    int n;
    cin>>n;

    while(n!=0){
        int last = n%10;
        ans+=last;
        n /= 10;
    }
    cout<<"Sum of all digits : "<<ans;

return 0;
}