#include <iostream>
#include "vect.h"
using namespace std;
void vect::affiche ()
{ int i ;
    for (i=0 ; i<3 ; i++) cout << v[i] << " " ;
    cout << "\n" ;
}