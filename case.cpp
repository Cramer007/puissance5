#include "Case.h"
#include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define YELLOW  "\033[33m"

Case::Case() : contenu(' ') {}

char Case::obtenirContenu() const {
    return contenu;
}

void Case::placerPion(char symbole) {
    contenu = symbole;
}

std::string Case::afficherContenu() const {
    if (contenu == 'X') return std::string(RED) + contenu + std::string(RESET);
    if (contenu == 'O') return std::string(YELLOW) + contenu + std::string(RESET);
    return std::string(1, contenu);
}
