#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int> lust;

    lust.push_front(10);
    lust.push_front(20);
    lust.push_front(30);

    // list<int>::iterator it = lust.begin();
    list<int>::iterator it = lust.end();

    // while(it != lust.end()){
    //     (*it) += 5;
    //     cout<<(*it)<<" ";
    //     it++;
    // }

    while(it != lust.begin()){
        it--; // need to go back first
        (*it) += 5;
        cout<<(*it)<<" ";
    }

    return 0;
}