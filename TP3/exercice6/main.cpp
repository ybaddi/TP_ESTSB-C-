//
// Created by baddi on 24/4/2021.
//

#include "set_int.h"
#include <iostream>
using namespace std;

int main_ex6(){

    set_int ints;
    cout << " give us the values" << endl;
    int val,i;
    for(i=0; i<11; i++){
        cout << " give us the value "<< i << endl;
        cin >> val;
        ints.ajouter(val);
    }
    cout <<" we have : "<< ints.cardinalite() << "elements \n";
    return 0;
}