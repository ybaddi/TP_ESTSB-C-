//
// Created by baddi on 24/4/2021.
//

#include "set_int.h"
#include <iostream>
using namespace std;

set_int::set_int(int size){
//    max_val = size;
    values = new int[max_val=size];
    nmbr_el=0;
}

set_int::~set_int(){
//    max_val = size;
   delete  values;
}
void set_int::ajouter(int val){
    cout << " test ajouter" << endl;
    if(!exist(val) && (nmbr_el < max_val)){
        values[nmbr_el++] = val;
    }
    cout << " test end ajouter" << endl;
}
int set_int::exist(int val){
    int n=0;
    while(n<nmbr_el && values[n] != val)   n++;
    return (n<nmbr_el);

}
int set_int::cardinalite(){
    return nmbr_el;
}


