//
// Created by baddi on 24/4/2021.
//

#ifndef UNTITLED1_SET_INT_H
#define UNTITLED1_SET_INT_H


class set_int{
private:
    int * values;
    int nmbr_el;
    int max_val;

public:
    set_int(int = 5);
    ~set_int();
    void ajouter(int);
    int exist(int);
    int cardinalite();
};

#endif //UNTITLED1_SET_INT_H
