#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    string s = "abc";
    int total = 8;

    for(int i=0;i<8;i++){
        string ans = "";
        int mask = i;
        for(int j=0;j<3;j++){
            if(mask&1){
                ans += s[3-j-1];
            }
            mask = mask >> 1;
        }
        sort(ans.begin(),ans.end());
        cout<<ans<<endl;
    }

    return 0;
}