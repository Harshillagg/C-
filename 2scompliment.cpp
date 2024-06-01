#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

    int arr[] = {0,0,0,0,1,0,0};

    // 1's complement
    for(int i=0;i<7;i++){
        arr[i] = !arr[i];
    }

    for(auto i:arr){
        cout<<i;
    }

    vector<int> ans;
    int carry = 0;
    int first = 1;

    // 2's complement
    for(int i=6;i>=0;i--){
        int temp = arr[i] + carry + first;
        if(temp == 2){
            ans.push_back(0);
            carry = 1;
        }
        else if(temp == 3){
            ans.push_back(1);
            carry = 1;
        }
        else if(temp == 1){
            ans.push_back(1);
            carry = 0;
        }
        first = 0;
    }

    if(carry) {
        ans.push_back(1);
    }

    reverse(ans.begin(),ans.end());
    cout<<endl;
    for(auto i:ans){
        cout<<i;
    }

    return 0;

}