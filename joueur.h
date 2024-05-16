#ifndef JOUEUR_H
#define JOUEUR_H

#include <string>

class Joueur {
private:
    std::string nom;
    char symbole;
    bool estIA;

public:
    Joueur(const std::string& n, char s, bool ia = false);
    char obtenirSymbole() const;
    std::string obtenirNom() const;
    bool estUnIA() const;
    int choisirColonneAleatoire(int nbColonnes) const;
};
int choisirColonneMinimax(const Plateau& plateau, char symboleAdversaire) const;


#endif
