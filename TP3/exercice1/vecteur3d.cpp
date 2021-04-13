//
// Created by baddi on 13/4/2021.
//

#include "vecteur3d.h"

vecteur3d::vecteur3d() : x(0), y(0), z(0){

}
vecteur3d::vecteur3d(float x1, float y1, float z1): x(x1), y(y1), z(z1){

}

int vecteur3d::coincide(vecteur3d v){
    if( (v.x == x) && (v.y == y) && (v.z == z)) return 1;
    else return 0;
}

int vecteur3d::coincide(vecteur3d *v){
    if( (v->x == x) && (v->y == y) && (v->z == z)) return 1;
    else return 0;
}

int vecteur3d::coincide(vecteur3d &v){
    if( (v.x == x) && (v.y == y) && (v.z == z)) return 1;
    else return 0;
}

// v1.coincide(v2)
