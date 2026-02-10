#include <iostream>
using namespace std;

int main() {


    int arr[5]= {11,22,33,44,55};
    
   

    int temp = arr[1];
    arr[1]=arr[0];
    arr[0]=temp;
    
     for(int i=0;i<5;i++){
      cout<<arr[i]<<" ";
    }

    return 0;
}
