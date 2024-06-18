#include <iostream>

using namespace std;

// 5 4 3 2 1

void printCount(int n){
    if(n==1){
        cout<<"1"<<" ";
        return;
    }
    printCount(n-1); // Here for 1 2 3 4 5
    cout<<n<<" ";
    printCount(n-1); // Here for 5 4 3 2 1
}

int main() {

    int n= 5;
    printCount(n);

    return 0;
}