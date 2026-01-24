#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin>>a;
      int temp =a;
      int sum=0;
    

       while (temp != 0) {
        int res = temp % 10;
        sum = sum * 10 + res;
        temp = temp / 10;
    }


    cout<<sum;

    return 0;
}    
