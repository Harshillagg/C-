#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void rev(queue<int> &q,int k,int n){
    if(n >= k){
        stack<int> s;
        for(int i=0;i<k;i++){
            int x = q.front();
            q.pop();
            s.push(x);
        }
        for(int i=0;i<k;i++){
            int x = s.top();
            q.push(x);
            s.pop();
        }
        rev(q,k,n-k);
    }
    else{
        for(int i=0;i<n;i++){
            int x = q.front();
            q.pop();
            q.push(x);
        }
    }
}

int main(){

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);

    int k = 3;

    rev(q,k,8);

    while (!q.empty()){
        cout << q.front() << " ";
        q.pop();
        cout << endl;
    }

    return 0;
}