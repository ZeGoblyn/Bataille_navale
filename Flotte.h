#ifndef FLOTTE_H_INCLUDED
#define FLOTTE_H_INCLUDED
#include <stdio.h>

#define hitFlotte 17
#define porteAvion 5
#define destroyer 4
#define croiseur 3
#define fregate 2
#define Flotte 5

void placementFlotte1(char Tflotte1[10][10]);

void placementFlotte2(char Tflotte2[10][10]);

void affichage(char Tflotte1 [10][10], char Tflotte2 [10][10],  char Tradar1 [10][10], char Tradar2 [10][10]);

#endif // FLOTTE_H_INCLUDED
