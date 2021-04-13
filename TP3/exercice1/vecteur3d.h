//
// Created by baddi on 13/4/2021.
//

#ifndef UNTITLED1_VECTEUR3D_H
#define UNTITLED1_VECTEUR3D_H

class vecteur3d {
    float x,y,z;
public:
    vecteur3d();
    vecteur3d(float,float,float);

    int coincide(vecteur3d);

    int coincide(vecteur3d *);

    int coincide(vecteur3d &);
};



#endif //UNTITLED1_VECTEUR3D_H
