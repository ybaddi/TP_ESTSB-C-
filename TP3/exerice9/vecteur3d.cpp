//
// Created by baddi on 24/4/2021.
//

#include "vecteur3d.h"

int vecteur3d::operator == (vecteur3d v){
    if( (v.x == x) && (v.y == y) && (v.z == z)) return 1;
    else return 0;
}
int vecteur3d::operator != (vecteur3d v){
  return ! ((*this) == v);
}
