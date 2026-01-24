#include<iostream>
using namespace std;

int main(){
    int n=5;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
        cout<<"* ";
        }cout<<endl;

    }


   for(int j=1;j<=n;j++){
    for(int k=1;k<=j;k++){
        cout<<"  ";
    } 


    for(int k=1;k<=n-j;k++){
            cout<<"* ";
        }cout<<endl;
    }
   
    
}
