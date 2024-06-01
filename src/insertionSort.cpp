#include <iostream>

using namespace std;

int main() {

    int arr[5] = {5,2,4,6,1};

    for(int i=1;i<5;i++){
        int temp = arr[i];
        int j=i-1;
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
                j--;
            } 
            else break;
        }
        arr[j+1] = temp;
    }    

    for(int i:arr){
        cout<<i<<" ";
    }

    return 0;
}