//
// Created by baddi on 8/5/2021.
//

#ifndef UNTITLED1_ETUDIANT_H
#define UNTITLED1_ETUDIANT_H

#include <ostream>

class Etudiant{
    int mat;
    string nom;
    int nbrNotes;
    float *tabNotes;

public:
    Etudiant();
    Etudiant(string nom, int nb);
    ~Etudiant();
    Etudiant(cont Etudiant E);

    int getMat() const;
    const string &getNom() const;
    int getNbrNotes() const;
    float *getTabNotes() const;

    void setNom(const string &nom);

    void saisir();
    void affichage();
    float moyenne();

    bool admis();
    bool comparer(Etudiant E);


};
#endif //UNTITLED1_ETUDIANT_H
