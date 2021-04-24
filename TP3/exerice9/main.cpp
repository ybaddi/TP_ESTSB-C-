//
// Created by baddi on 24/4/2021.
//

#include "vecteur3d.h"
#include <iostream>
using namespace std;

void affiche(const point & p){
    cout << " le point a les coordonnee suivante : " << p.x << " " << p.y<< endl;
}


int main(){

    point p(1,2);
    affiche(p);
    point * paddr;
    paddr = new point(2,6);
    affiche(*paddr);
    return 0;
}
