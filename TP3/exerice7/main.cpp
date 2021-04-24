//
// Created by baddi on 24/4/2021.
//

#include "point.h"
#include <iostream>
using namespace std;

void affiche(const vecteur3d & p){
    cout << " le vecteur3d a les coordonnee suivante : " << p.x << " " << p.y<< endl;
}


int main(){

    vecteur3d p(1, 2);
    affiche(p);
    vecteur3d * paddr;
    paddr = new vecteur3d(2, 6);
    affiche(*paddr);
    return 0;
}
