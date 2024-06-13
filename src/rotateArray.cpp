#include <iostream>
#include <vector>

using namespace std;

void rotateArrRight(vector<int> &v, int k, int n){
    vector<int> temp;
    k=k%n;
    for(int i=n-k;i<n;i++){
        temp.push_back(v[i]);
    }

    for(int i=n-k-1;i>=0;i--){
        v[i+k] = v[i];
    }

    for(int i=0;i<k;i++){
        v[i] = temp[i];
    }

}

int main() {

    vector<int> v;

    int n;
    cout<<"enter the no. of elements : ";
    cin>>n;

    for(int i=0;i<n;i++){
        int it;
        cout<<"enter it : ";
        cin>>it;
        v.push_back(it);
    }

    cout<<"array before : ";
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    int k;
    cout<<"enter elements to shift : ";
    cin>>k;
    rotateArrRight(v,k,n);

    cout<<"array after : ";
    for(auto i:v){
        cout<<i<<" ";
    }

    return 0;
}