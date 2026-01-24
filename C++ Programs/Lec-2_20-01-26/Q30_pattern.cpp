#include<iostream>
using namespace std;

int main(){
    int n=5;
    int p=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
          cout<<p--<<"  ";
        }cout<<endl;
        p=n;
    }
}