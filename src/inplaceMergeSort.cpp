#include <iostream>

using namespace std;

void merge(int arr[],int s,int e,int mid){
    int start2 = mid + 1;
    if (arr[mid] <= arr[start2]) {
        return; // Already sorted
    }

    while (s <= mid && start2 <= e) {
        if (arr[s] <= arr[start2]) {
            s++;
        } else {
            int value = arr[start2];
            int index = start2;
            while (index != s) {
                arr[index] = arr[index - 1];
                index--;
            }
            arr[s] = value;
            s++;
            mid++;
            start2++;
        }
    }
}

void mergeSort(int arr[],int s,int e){
    if(s>=e) return;
    int mid = s+(e-s)/2;
    mergeSort(arr,s,mid);   
    mergeSort(arr,mid+1,e);
    merge(arr,s,e,mid);
}

int main() {

    int arr[] = { 10, 7, 8, 9, 1, 5 };
    mergeSort(arr,0,5);

    for(int i:arr){
        cout<<i<<" ";
    }

    return 0;
}