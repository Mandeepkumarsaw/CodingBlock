#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin>>a;

    if (a < 2) {
        cout << "Invalid input: a must be >= 2";
    } else {
        cout<<(a-1)*(a-2);
    }
    return 0;
}