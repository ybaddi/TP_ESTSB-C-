//
// Created by baddi on 6/4/2021.
//

#include <iostream>
#include "point.h"

using namespace std;


int main(int argc, char** argv){

    cout << "hello world"<< endl;
    point a(1,5);
    affiche(a);

    point*b;
    b = new point(12,51);
    affiche(*b);
    return 1;
}

