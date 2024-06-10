#include <iostream>

using namespace std;

int main() {

    int arr[5] = {5,2,4,6,1};

    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i] > arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }    

    for(int i:arr){
        cout<<i<<" ";
    }

    return 0;
}