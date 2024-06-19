#include <iostream>

using namespace std;

int powerOfTwo(int n){
    if(n==1) return 2;
    return (2 * powerOfTwo(n-1));
}

int main() {

    int n = 3;
    cout<< n << "rd power of 2 is : " << powerOfTwo(n);

    return 0;
}