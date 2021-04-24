//
// Created by baddi on 6/4/2021.
//

class vecteur3d
{
    int x, y ;
public :
    friend void affiche(const vecteur3d &);
    vecteur3d (int abs=0, int ord=0) { x = abs ;y = ord ;}
};


