//
// Created by baddi on 6/4/2021.
//
#include <iostream>
#include <cmath>
using namespace std;

double norme(double * vect, int n);
double produitScalaire(double * vect_1,double * vect_2, int n);

// TODO creATE MAIN FUCTION


int main(int argc, char** argv){

    cout << " veuillez entrer les dimension : " << endl;
    int n;
    cin >> n;

    double * vect_1;
    double * vect_2;

    vect_1 = new double[n];
    vect_2 = new double[n];

     for (int i=0; i<n; i++){
         cout << " Veuillez entrer lelement " << i << " : " << endl;
         cin >> *(vect_1 + i);
     }

    cout << " la norme de vect_1 est  : " << norme(vect_1,n) << endl;

    for (int i=0; i<n; i++){
        cout << " Veuillez entrer lelement " << i << " : " << endl;
        cin >> *(vect_2 + i);
    }

    cout << " la norme de vect_1 est  : " << norme(vect_2,n) << endl;

    cout << " la norme de vect_1 est  : " << produitScalaire(vect_1,vect_2,n) << endl;
    return 1;
}
// TODO ADD FUNCTION TO CUMPUTE NORME

double norme(double * vect, int n){
    double result;
    for (int i=0; i<n; i++){
        result += pow(vect[i],2);
    }
    return sqrt(result);
}

// TODO CREATE FUNCTION COMPUTE PRODUITSCALAIRE

double produitScalaire(double* vect_1, double* vect_2, int n){
    double result;
    for (int i=0; i<n; i++){
        result += vect_1[i] * vect_2[i];
    }
    return result;
}
