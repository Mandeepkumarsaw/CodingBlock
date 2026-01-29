#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cin>>m;
    if(m>=60 && m<=100) {
        cout<<"Grade- A";
    } else if(m>=40 && m<=59) {
        cout<<"Grade- B";
    } else {
        cout<<"Grade-C";
    }

    return 0;
}