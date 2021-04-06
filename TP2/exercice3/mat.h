//
// Created by baddi on 6/4/2021.
//

#ifndef UNTITLED1_MAT_H
#define UNTITLED1_MAT_H


class vect ;
class matrice
{   double mat[3] [3] ;
public :
    matrice () ;
    matrice (double t [3] [3] ) ; // constructeur à partir d'un tableau 3 x 3
    friend vect prod (const matrice &, const vect &) ;  // fonction amie indépendante
};

#endif //UNTITLED1_MAT_H
