#include<iostream>
using namespace std;

int main(){
    int n=7;

    //top
    for(int i=1;i<=n/2;i++){
        for(int j=0;j<=n/2-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<2*i;k++){
            cout<<"* ";
        }cout<<endl;
    }

    //mid
    for(int j=1;j<=n;j++){
        cout<<"* ";
    }cout<<endl;

    //lower
    for(int i=1;i<=n/2;i++){
        for(int j=1;j<=i;j++){
            cout<<"  ";
        }
        for(int k=1;k<n-i-2;k++){
            cout<<"* ";
        }
         for(int k=2;k<n-i-2;k++){
            cout<<"* ";
        }cout<<endl;
    }
}