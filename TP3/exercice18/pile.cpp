//
// Created by baddi on 8/5/2021.
//

#include "pile.h"

Pile::Pile(){
    data=NULL;
    size=0;
}
int Pile::push(int item){
        int * tmp = new int[size+1];
        if(tmp == NULL){
            return 0;
        }
        for(int i =0; i < size-1; i++) tmp[i] = data[i];
        tmp[size] = item;

        data = tmp;
        size++;
        return 1;

}

int Pile::pop(int & item){
      if(size == 0) return 0;
      int * tmp = new int[size-1];
    if(tmp == NULL){
        return 0;
    }
    item = data[--size];
    for(int i=0; i<size; i++) tmp[i] = data[i];

    data = tmp;
    return 1;
}
