#include<iostream>
using namespace std;

int main(){
    int n=5;

    int p=n;
    int q=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==q){
            cout<<"*  ";
            } else {
            cout<<p<<"  ";
            p=p-1;
            }
         
        }
         q=q-1;
        cout<<endl;
        p=n;
    }
}