#ifndef JEU_H
#define JEU_H

#include <vector>
#include "Plateau.h"
#include "Joueur.h"

class Jeu {
private:
    Plateau plateau;
    std::vector<Joueur> joueurs;
    int tour;
    Joueur* joueurCourant;

    bool estMouvementValide(int colonne) const;
    bool partieEstTerminee(int ligne, int colonne) const;

public:
    Jeu(int lignes, int colonnes);
    void ajouterJoueur(const Joueur& joueur);
    void demarrer();
};

#endif
