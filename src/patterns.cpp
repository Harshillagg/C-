#include <iostream>

using namespace std;

int main(){

    int n;
    cout<<"enter the number of rows : ";
    cin>>n;
    cout<<endl;

    // reverse numeric square
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<(n-j)<<' ';
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;


    // lower numeric triangle
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<(i-j+1)<<' ';
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;


    // alphabet square
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         char ch = 'A' + i + j;
    //         cout<<(ch)<<' ';
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;


    // pyramid
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=(n-i-2);j++){
    //         cout<<' ';
    //     }
    //     for(int j=0;j<(i+1);j++){
    //         cout<<"*";
    //     }
    // full pyramid
    //     for(int j=0;j<i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;


    // half numeric hollow pyramid
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         if(j==0 || j==i || i==n-1){
    //             cout<<j+1<<' ';
    //         }
    //         else cout<<' '<<' ';
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;


    // numeric hollow inverted half pyramid
    // for(int i=0; i<n; i++){
    //     for(int j=0; j <= (n-i-1) ;j++){
    //         if(j==(n-i-1) || j==0 || i==0){
    //             cout<<j+i+1<<' ';
    //         }
    //         else cout<<' '<<' ';
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;


    // numeric palindrome pyramid
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<(n-i-1);j++){
    //         cout<<' '<<' ';
    //     }
    //     for(int j=1;j<=(i+1);j++){
    //         cout<<j<<' ';
    //     }
    //     for(int j=i;j>0;j--){
    //         cout<<j<<' ';
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;


    // // solid half diamond
    // for(int i=0;i<n;i++){
    //     for(int j=0; j<=i && i <= n/2; j++){
    //         cout<<'*'<<' ';
    //     }
    //     for(int j=n-i; j>0 && i > n/2; j--){
    //         cout<<'*'<<' ';
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;


    //fancy pattern
    // for(int i=0;i<5;i++){
    //     for(int j=0; j < (n/2-i); j++){
    //         cout<<'*';
    //     }
    //     for(int j=0; j<i+1;j++){
    //         if(j&1) cout<<'*';
    //         else cout<<i+1;
    //     }
    //     for(int j=1;j<=i;j++){
    //         if(i&1){
    //             if(j&1) cout<<i+1;
    //             else cout<<'*';
    //         }
    //         else{
    //             if(j&1) cout<<'*';
    //             else cout<<i+1;
    //         }
    //     }
    //     for(int j=0; j < (n/2-i); j++){
    //         cout<<'*';
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;


    

    return 0;

}