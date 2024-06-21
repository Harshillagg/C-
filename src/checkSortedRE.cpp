#include <iostream>

using namespace std;

bool checkSorted(int arr[], int n, int index){
    if(index == n-1){
        return true;
    }

    if(arr[index] < arr[index+1]){
        return checkSorted(arr,n,index+1);
    }
    else return false;
}

int main() {

    int arr[] = {10,20,30,31,41};

    if(checkSorted(arr,5,0)) cout<< "SORTED";
    else cout<<"NOT SORTED";

    return 0;
}