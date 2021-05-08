//
// Created by baddi on 8/5/2021.
//

#include "etudiant.h"
#include<iostream>
using namespace std;

// TODO add a static variable

Etudiant::Etudiant(){
    mat++;
    nom= " ";
    nbrNotes=0;
    tabNotes = new float[nbrNotes];
}
Etudiant::Etudiant(string new_nom, int nb){
    mat++;
    nom= new_nom;
    nbrNotes=nb;
    tabNotes = new float[nbrNotes];
}
Etudiant::~Etudiant(){
    delete []tabNotes;
}
Etudiant::Etudiant(cont Etudiant E){
    mat=E.mat;
    nom= E.nom;
    nbrNotes=E.nbrNotes;
    for(int i=0; i<nbrNotes; i++) tabNotes[i] = E.tabNotes[i];
}

int Etudiant::getMat() const {
    return mat;
}

const string &Etudiant::getNom() const {
    return nom;
}

int Etudiant::getNbrNotes() const {
    return nbrNotes;
}

float *Etudiant::getTabNotes() const {
    return tabNotes;
}

void Etudiant::setNom(const string &nom) {
    Etudiant::nom = nom;
}

void Etudiant::saisir(){
    cout << " Veuillez entrer les notes:" << endl;
    for(int i=0; i<nbrNotes; i++){
        cout << " Veuillez entrer la note:" << endl;
        cin>>tabNotes[i];
    }
}

void Etudiant::affichage(){
    cout << "mat: " << mat << " nom: " << nom << " nbrNotes: " << nbrNotes << " tabNotes: "
       << endl;
    for(int i=0; i<nbrNotes; i++){
        cout << " la note:" << endl;
        cout<<tabNotes[i];
    }
}
float Etudiant::moyenne(){
    float s =0;
    for(int i=0; i<nbrNotes; i++){
        s += tabNotes[i];
    }
    return s/nbrNotes;
}

bool Etudiant::admis(){
    return (moyenne() >=0)
}
bool Etudiant::comparer(Etudiant E){
    return (moyenne() == E.moyenne());
}


