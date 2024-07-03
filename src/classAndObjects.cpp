#include <iostream>

using namespace std;

class Car {
    public:
        int engine;
        int model;
        string name;
        string company;

        Car(int e, int m, string n, string c){
            this->engine = e;
            this->model = m;
            this->name = n;
            this->company = c;
        }

        void start(){ 
            cout<<this->engine<<"starting"<<endl;
        }

        void stop(){
            cout<<"stopping"<<endl;
        }
};

int main() {

    Car C1(1, 2, "Hero", "Honda");

    cout<<"Car name : "<<C1.name<<endl;

    return 0;
}