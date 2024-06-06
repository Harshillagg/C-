#include <iostream>
#include <climits>

using namespace std;

int accurateDivison(int dividend, int divisor){    
    int ans = 0;
    int s=0,e=abs(dividend);

    while(s<=e){
        int mid = s+((e-s)>>1);
        if(abs(divisor) * mid <= abs(dividend)){
            ans = mid;
            s=mid+1;
        }
        else e=mid-1;
    }
    
    if(dividend > 0 && divisor < 0 || dividend < 0 && divisor > 0){
        ans = -ans;
    }   

    return ans;
}

double preciseDivison(int accurateAns, int decimal, int divisor, int dividend){
    double ans = abs(accurateAns);
    double factor = 1;

    for(int i=0;i<decimal;i++){
        factor /= 10.0;
        for(int j=1;j<10;j++){
            double temp = ans + factor;
            if(abs(divisor) * temp <= abs(dividend)) ans = temp;
            else break;
        }
    }

    if(accurateAns < 0){
        return -ans;
    } 

    return ans;
}

int main() {

    int dividend = 10, divisor = -4;
    int decimal;

    int accurateAns = accurateDivison(dividend,divisor);     

    // cout<<"enter the number of decimal points : ";
    // cin>>decimal;

    double preciseAns = preciseDivison(accurateAns,decimal, divisor, dividend);

    cout<<"the accurate answer is : "<<accurateAns<<endl;

    cout<<"the precise answer is : "<<preciseAns;

    return 0;
}