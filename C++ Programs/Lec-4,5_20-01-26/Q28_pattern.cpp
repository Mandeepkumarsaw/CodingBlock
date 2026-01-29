#include<iostream>
using namespace std;

int main(){
    int n=5;

    for(int i=1;i<=n;i++){
       int p=i;

       //left
        for(int k=1;k<=n-i;k++){
            cout<<"   ";
        }
        for(int j=1;j<=i;j++){
            cout<<p++<<"  ";
        }
        
        //right
        for(int l=1;l<i;l++){
            cout<<--p-1<<"  ";
        }
        
        cout<<endl;
    }
}