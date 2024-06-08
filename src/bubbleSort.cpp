#include <iostream>

using namespace std;

int main() {

    int arr[] = {3, 4, 5, 2, 1};

    int n = 5;

    for(int i=1; i<n; i++){
        bool isSwap = false;
        for(int j=0; j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap) break;
    }

    for(int i:arr){
        cout<<i<<" ";
    }

    return 0;
}