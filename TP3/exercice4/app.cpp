//
// Created by baddi on 24/4/2021.
//
#include <iostream>
using namespace std;
class point {
    static int nmbr;
    int num;

public:
    point(){
        num = ++nmbr;
        cout<<"creation du point ayant le numero "<< num<< "\n";
    }

    ~point(){
        cout<<"destruction du point ayant le numero "<< num<< "\n";
    }
};

int point::nmbr=0;
int main(){
    point * pointarray = new point[4];
    delete [] pointarray;
    return 0;
}
