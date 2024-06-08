#include<iostream>
using namespace std;

// int main(){
//     int n, sum=0;
//     cin >> n;
//     int *input = new int[n]; 
//     for(int i=0;i<n;i++){
//         cin >> input[i];
//     }
//     for(int i=0; i<n; i++){
//         sum = sum + input[i];
//     }
//     cout << sum << endl;
//     return 0;
// }

// int linearSearch(int arr[], int n ,int val){
//     for(int i=0;i<n;i++){
//         if(arr[i]==val){
//             return i;
//         }
//     }
//     return -1;
// }

// void populate(int arr[],int n){
//     int j=0;
//     for(int i=0; i < n; i = i + 2){
//         arr[n-j-1] = i+2;
//         arr[j] = i+1;
//         j++;
//     }
// }

// void swapAlternate(int arr[],int size){
//     for(int i=0;i<size-1;i=i+2){
//         int temp = arr[i+1];
//         arr[i+1] = arr[i];
//         arr[i] = temp;
//     }
// }

// int pairSumToX(int input[], int size, int x){
// 	int pairs = 0;
// 	for(int i=0; i<size; i++){
// 		for(int j=i+1; j<size; j++){
// 			if(input[i] + input[j] == x) pairs++;
// 		}
// 	}
// 	return pairs;
// }

// void sort0sand1s(int input[], int size){
// 	int nextZero = 0;
// 	for(int i=0; i<size; i++){
// 		if(input[i] == 0){
// 			int temp = input[nextZero];
// 			input[nextZero] = input[i];
// 			input[i] = temp;
//             nextZero++;
// 		}
// 	}
// }