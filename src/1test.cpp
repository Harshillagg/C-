#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


// void printAllPairs(int arr[], int n) {
//     for(int i=0; i<n; i++) {
//         //for every i, we are running looping variable "j" from start to end
//         for(int j=0; j<=i; j++){
//             cout << arr[i] <<"," << arr[j]<<" ";
//         }
//         cout<<endl;
//     }
// }

int main() {
    
    // int arr[] = {10,20,30,40,50,60};
    // int size = 6;
    // printAllPairs(arr,size);

    // int x[3][5] = {
    //     {1,2,3,4,5},
    //     {6,7,8,9,10},
    //     {11,12,13,14,15}
    // };

    vector<int> v = {1,2,3};
    for(auto i:v){
        cout<<i<<' ';
    }

    // int *n = &x[0][0];

    // cout<< *(n+5)+1;

    // return 0;

}