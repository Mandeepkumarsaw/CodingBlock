#include <iostream>
using namespace std;

int main(){
    int arr[5] = {11,22,33,44,55};
    bool found = false;
    int target = 44;

    for(int i=0;i<5;i++){
        if(arr[i] == target){
            cout<<"Target Matched- "<<arr[i]<<endl;
            found  =true;
        }
         
    }

    cout<<(!found ? "Not Found" : "Found");
}