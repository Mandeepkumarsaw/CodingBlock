#include<iostream>
using namespace std;

int main(){
    int n=10;
    int q,p=n;
    
    for(int i=1;i<=n;i++){
        
        //left
        for(int l=1;l<=n-i;l++){
            cout<<"   ";
        }
        
        q=p-i;
        q++;
        for(int j=1;j<i;j++){
            
            cout<<q<<"  ";
            q=q+1;
        }

        //right
        for(int k=0;k<i;k++){
            if(k==0){
            cout<<"0  ";
            }else {
                cout<<n-k<<"  ";
            }
        }
        
        cout<<endl;
    }

}