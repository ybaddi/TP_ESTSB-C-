//
// Created by baddi on 24/4/2021.
//
#include <iostream>
using namespace std;
class vecteur3d {
    static int nmbr;
    int num;

public:
    vecteur3d(){
        num = ++nmbr;
        cout<<"creation du vecteur3d ayant le numero "<< num<< "\n";
    }

    ~vecteur3d(){
        cout<<"destruction du vecteur3d ayant le numero "<< num<< "\n";
    }
};

int vecteur3d::nmbr=0;
int main_exc5(){
    vecteur3d * pointarray = new vecteur3d[4];
    delete [] pointarray;
    return 0;
}
