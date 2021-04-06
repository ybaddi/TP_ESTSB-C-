#include <iostream>
#include <cmath>
  using namespace std;


double norme (double*, int );
double produitScalaire (double* vect_1,double* vect_2, int n);

int main() {
    cout << " hello world"<< endl;

    cout << " veuillez entrer la dimension du vector : "<< endl;
    int n;
    cin >>n;

    double* vect_1 = new double[n];
    double* vect_2 = new double[n];

     for (int i=0; i<n; i++){
         cout << " veuillez entrer lelement  "<< i << " : " << endl;
         cin >> *(vect_1 + i);
     }

//      TODO implement norme function
    cout << " la norme de vect 1 est   "<< norme(vect_1,n) << " : " << endl;

    for (int i=0; i<n; i++){
        cout << " veuillez entrer lelement  "<< i << " : " << endl;
        cin >> *(vect_2 + i);
    }
    cout << " la norme de vect 1 est   "<< norme(vect_2,n) << " : " << endl;

    cout << " le produit scalaire est   "<< produitScalaire(vect_1, vect_2,n) << " : " << endl;
    return 0;
}

double norme (double* vect_1, int n){
    double res=0;
    for (int i=0; i<n; i++){
        res += pow(vect_1[i],2);
    }
    return sqrt(res);
}

double produitScalaire (double* vect_1,double* vect_2, int n){
    double res=0;
    for (int i=0; i<n; i++){
        res += vect_1[i] * vect_2[i];
    }
    return res;
}


