#include "vect.h"
#include "mat.h"

vect prod(const matrice &m, const vect &x) {
    int i, j;
    double som;
    vect res;       // pour le résultat du produit
    for (i = 0; i < 3; i++) {
        for (j = 0, som = 0; j < 3; j++)
            som += m.mat[i][j] * x.v[j];
        res.v[i] = som;
    }
    return res;
}

int main()
{
    vect w (1,2,3) ;
    vect res  ;
    double tb [3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 } ;
    matrice a =  tb  ;
    res = prod(a, w) ;
    res.affiche () ;
    return 1;
}
