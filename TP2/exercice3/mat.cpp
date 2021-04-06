#include <iostream>
#include "mat.h"
matrice::matrice (double t [3] [3])
{ int i ; int j ;
    for (i=0 ; i<3 ; i++)
        for (j=0 ; j<3 ; j++)
            mat[i] [j] = t[i] [j] ;
}