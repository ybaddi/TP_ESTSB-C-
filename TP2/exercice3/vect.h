//
// Created by baddi on 6/4/2021.
//

#ifndef UNTITLED1_VECT_H
#define UNTITLED1_VECT_H

class matrice ;

class vect
{
    double v[3] ;      // vecteur à 3 composantes
public :
    vect (double v1=0, double v2=0, double v3=0)
    { v[0] = v1 ; v[1]=v2 ; v[2]=v3 ; }
    friend vect prod (const matrice &, const vect &) ;// fonction amie indépendante
    void affiche () ;
};

#endif //UNTITLED1_VECT_H
