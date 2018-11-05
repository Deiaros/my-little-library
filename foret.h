#include <stdio.h>
#include <stdlib.h>
#ifndef FORET_H_INCLUDED
#define FORET_H_INCLUDED
#define FORET_HAUTEUR 40
#define FORET_LONGUEUR 20
#define FORET_SOL ' '
#define FORET_ARBRE 'T'
#define FORET_DENSITE 15

typedef char Foret [FORET_HAUTEUR] [FORET_LONGUEUR];

void afficherForet(Foret foret);

void initialiserForet(Foret foret);

void initialiserArbre(Foret foret);

#endif
