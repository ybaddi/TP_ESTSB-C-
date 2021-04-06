//
// Created by baddi on 6/4/2021.
//

class point
{
    int x, y ;
public :
    friend void affiche(const point &);
    point (int abs=0, int ord=0) { x = abs ;y = ord ;}
};


