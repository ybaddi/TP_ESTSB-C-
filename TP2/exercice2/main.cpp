//
// Created by baddi on 6/4/2021.
//

#include <iostream>
#include "point.h"

using namespace std;


int main_2(int argc, char** argv){

    cout << "hello world"<< endl;
    vecteur3d a(1, 5);
    affiche(a);

    vecteur3d*b;
    b = new vecteur3d(12, 51);
    affiche(*b);
    return 1;
}

