#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<char>& s,int i ,int j){
    while(i<j){
        swap(s[i++],s[j--]);
    }
}

int main() {

    vector<char> s = {'t','h','e',' ','s','k','y',' ','i','s',' ','b','l','u','e'};
    int i=0,j=0;
    int n = s.size();
    while(j<n){
        if(s[j]==' '){
            reverse(s,i,j-1);
            i=j+1;
        }
        else if(j==n-1){
            reverse(s,i,j);
        }
        j++;
    }
    reverse(s,0,n-1);
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
    return 0;
}