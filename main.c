#include <stdio.h>
#include <stdlib.h>

#define Flotte 5
#define hitFlotte 17
#define porteAvion 5
#define destroyer 4
#define croiseur 3
#define fregate 2

void Menu();

void New_game();

void Quit();

void placementFlotte1(char Tflotte1[10][10]);

void placementFlotte2(char Tflotte2[10][10]);

void affichage(char Tflotte1 [10][10], char Tflotte2 [10][10],  char Tradar1 [10][10], char Tradar2 [10][10]);

void tourJ1(char Tradar1 [10][10], char Tflotte2 [10][10], int *hitFlotte1, int *hitFlotte2);

void tourJ2(char Tradar2 [10][10], char Tflotte1 [10][10], int *hitFlotte1, int *hitFlotte2);

void guerre(char Tflotte1 [10][10], char Tflotte2 [10][10],  char Tradar1 [10][10], char Tradar2 [10][10]);

void ecritureVictoire (FILE *score);

int main()
{
    char select;
    FILE *Score;

    printf("MENU\n");
    printf("Entrez la commande desiree parmis NEW GAME (N), SCORE (S), QUIT (Q)\n");

    scanf("%c",&select);

    if (select=='N')
    {
        New_game();
    }

    if (select=='S')
    {
        Score=fopen("score", "r");
    }

    if (select=='Q')
    {
        return 1;
    }


    return 0;
}



void New_game()
{
//BUT mise en place des grilles et dispositions des navires
//ENTREE les coordonées de navire par joueur
//SORTIE

    char Tflotte1 [10][10];

    char Tflotte2 [10][10];

    char Tradar1 [10][10];

    char Tradar2 [10][10];

    int i, j;


    printf("Radar J1");
    printf("\n");

    for (i=0; i<10; i++)
    {
        for (j=0; j<10; j++)
        {
            Tradar1[i][j]=95;
            printf("%c", Tradar1 [i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Joueur 1");
    printf("\n");

   for (i=0; i<10; i++)
    {
        for (j=0; j<10; j++)
        {
            Tflotte1[i][j]=95;
            printf("%c", Tflotte1 [i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Radar J2");
    printf("\n");

    for (i=0; i<10; i++)
    {
        for (j=0; j<10; j++)
        {
            Tradar2[i][j]=95;
            printf("%c", Tradar2 [i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Joueur 2");
    printf("\n");

    for (i=0; i<10; i++)
    {
        for (j=0; j<10; j++)
        {
            Tflotte2[i][j]=95;
            printf("%c", Tflotte2 [i][j]);
        }
        printf("\n");
    }

    placementFlotte1(Tflotte1);

    affichage(Tflotte1, Tflotte2, Tradar1, Tradar2);

    placementFlotte2(Tflotte2);

    affichage(Tflotte1, Tflotte2, Tradar1, Tradar2);

    guerre(Tflotte1, Tflotte2, Tradar1, Tradar2);

}

void placementFlotte1(char Tflotte1[10][10])
//BUT placer la flotte du joueur 1
//ENTREE les coordonnées de chaque navires
//SORTIE un tableau ou les bateaux sont placés
{
    int c, j, a, b;
    char l;
    //char terrain[10][10];

    c=1;

    while(c<Flotte)
    {
            printf("Donnez les coordonées de la case 1 du porte avion");
            printf("Donnez la coordonnees X");
            scanf("%d", &a);
            fflush(stdin);
            printf("Donnez la coordonnees Y");

            scanf("%d", &b);
            fflush(stdin);

            printf("Dans quel direction orienter le navire? Vers le bas (B)? Ou vers la droite? (D)");
            scanf("%c", &l);
            fflush(stdin);

            if(l=='D')
            {
               for(j=0; j<porteAvion; j++)
                {
                    Tflotte1[a-1][b-1]=80;
                    b++;
                }
            }
            else if(l=='B')
            {
                for(j=0; j<porteAvion; j++)
                {
                    Tflotte1[a-1][b-1]=80;
                    a++;
                }
            }

            c++;

            printf("Donnez les coordonées de la case 1 du destroyer");
            printf("Donnez la coordonnees X");
            scanf("%d", &a);
            fflush(stdin);
            printf("Donnez la coordonnees Y");

            scanf("%d", &b);
            fflush(stdin);

            printf("Dans quel direction orienter le navire? Vers le bas (B)? Ou vers la droite? (D)");
            scanf("%c", &l);
            fflush(stdin);

            if(l=='D')
            {
               for(j=0; j<destroyer; j++)
                {
                    Tflotte1[a-1][b-1]=80;
                    b++;
                }
            }
            else if(l=='B')
            {
                for(j=0; j<destroyer; j++)
                {
                    Tflotte1[a-1][b-1]=68;
                    a++;
                }
            }

            c++;

            printf("Donnez les coordonées de la case 1 du croiseur 1");
            printf("Donnez la coordonnees X");
            scanf("%d", &a);
            fflush(stdin);
            printf("Donnez la coordonnees Y");

            scanf("%d", &b);
            fflush(stdin);

            printf("Dans quel direction orienter le navire? Vers le bas (B)? Ou vers la droite? (D)");
            scanf("%c", &l);
            fflush(stdin);

            if(l=='D')
            {
               for(j=0; j<croiseur; j++)
                {
                    Tflotte1[a-1][b-1]=67;
                    b++;
                }
            }
            else if(l=='B')
            {
                for(j=0; j<croiseur; j++)
                {
                    Tflotte1[a-1][b-1]=67;
                    a++;
                }
            }

            c++;

            printf("Donnez les coordonées de la case 1 du croiseur2");
            printf("Donnez la coordonnees X");
            scanf("%d", &a);
            fflush(stdin);
            printf("Donnez la coordonnees Y");

            scanf("%d", &b);
            fflush(stdin);

            printf("Dans quel direction orienter le navire? Vers le bas (B)? Ou vers la droite? (D)");
            scanf("%c", &l);
            fflush(stdin);

            if(l=='D')
            {
               for(j=0; j<croiseur; j++)
                {
                    Tflotte1[a-1][b-1]=75;
                    b++;
                }
            }
            else if(l=='B')
            {
                for(j=0; j<croiseur; j++)
                {
                    Tflotte1[a-1][b-1]=75;
                    a++;
                }
            }

            c++;

            printf("Donnez les coordonées de la case 1 de la fregate");
            printf("Donnez la coordonnees X");
            scanf("%d", &a);
            fflush(stdin);
            printf("Donnez la coordonnees Y");

            scanf("%d", &b);
            fflush(stdin);

            printf("Dans quel direction orienter le navire? Vers le bas (B)? Ou vers la droite? (D)");
            scanf("%c", &l);
            fflush(stdin);

            if(l=='D')
            {
               for(j=0; j<fregate; j++)
                {
                   Tflotte1[a-1][b-1]=70;
                    b++;
                }
            }
            else if(l=='B')
            {
                for(j=0; j<fregate; j++)
                {
                   Tflotte1[a-1][b-1]=70;
                    a++;
                }
            }

            c++;
    }

}


void placementFlotte2(char Tflotte2[10][10])
//BUT placer la flotte du joueur 2
//ENTREE les coordonnées de chaque navires
//SORTIE un tableau ou les bateaux sont placés
{
    int c, j, a, b;
    char l;
    //char terrain[10][10];

    c=1;

    while(c<Flotte)
    {
            printf("Donnez les coordonées de la case 1 du porte avion");
            printf("Donnez la coordonnees X");
            scanf("%d", &a);
            fflush(stdin);
            printf("Donnez la coordonnees Y");

            scanf("%d", &b);
            fflush(stdin);

            printf("Dans quel direction orienter le navire? Vers le bas (B)? Ou vers la droite? (D)");
            scanf("%c", &l);
            fflush(stdin);

            if(l=='D')
            {
               for(j=0; j<porteAvion; j++)
                {
                    Tflotte2[a-1][b-1]=80;
                    b++;
                }
            }
            else if(l=='B')
            {
                for(j=0; j<porteAvion; j++)
                {
                    Tflotte2[a-1][b-1]=80;
                    a++;
                }
            }

            c++;

            printf("Donnez les coordonées de la case 1 du destroyer");
            printf("Donnez la coordonnees X");
            scanf("%d", &a);
            fflush(stdin);
            printf("Donnez la coordonnees Y");

            scanf("%d", &b);
            fflush(stdin);

            printf("Dans quel direction orienter le navire? Vers le bas (B)? Ou vers la droite? (D)");
            scanf("%c", &l);
            fflush(stdin);

            if(l=='D')
            {
               for(j=0; j<destroyer; j++)
                {
                    Tflotte2[a-1][b-1]=80;
                    b++;
                }
            }
            else if(l=='B')
            {
                for(j=0; j<destroyer; j++)
                {
                    Tflotte2[a-1][b-1]=68;
                    a++;
                }
            }

            c++;

            printf("Donnez les coordonées de la case 1 du croiseur 1");
            printf("Donnez la coordonnees X");
            scanf("%d", &a);
            fflush(stdin);
            printf("Donnez la coordonnees Y");

            scanf("%d", &b);
            fflush(stdin);

            printf("Dans quel direction orienter le navire? Vers le bas (B)? Ou vers la droite? (D)");
            scanf("%c", &l);
            fflush(stdin);

            if(l=='D')
            {
               for(j=0; j<croiseur; j++)
                {
                    Tflotte2[a-1][b-1]=67;
                    b++;
                }
            }
            else if(l=='B')
            {
                for(j=0; j<croiseur; j++)
                {
                    Tflotte2[a-1][b-1]=67;
                    a++;
                }
            }

            c++;

            printf("Donnez les coordonées de la case 1 du croiseur2");
            printf("Donnez la coordonnees X");
            scanf("%d", &a);
            fflush(stdin);
            printf("Donnez la coordonnees Y");

            scanf("%d", &b);
            fflush(stdin);

            printf("Dans quel direction orienter le navire? Vers le bas (B)? Ou vers la droite? (D)");
            scanf("%c", &l);
            fflush(stdin);

            if(l=='D')
            {
               for(j=0; j<croiseur; j++)
                {
                    Tflotte2[a-1][b-1]=75;
                    b++;
                }
            }
            else if(l=='B')
            {
                for(j=0; j<croiseur; j++)
                {
                    Tflotte2[a-1][b-1]=75;
                    a++;
                }
            }

            c++;

            printf("Donnez les coordonées de la case 1 de la fregate");
            printf("Donnez la coordonnees X");
            scanf("%d", &a);
            fflush(stdin);
            printf("Donnez la coordonnees Y");

            scanf("%d", &b);
            fflush(stdin);

            printf("Dans quel direction orienter le navire? Vers le bas (B)? Ou vers la droite? (D)");
            scanf("%c", &l);
            fflush(stdin);

            if(l=='D')
            {
               for(j=0; j<fregate; j++)
                {
                   Tflotte2[a-1][b-1]=70;
                    b++;
                }
            }
            else if(l=='B')
            {
                for(j=0; j<fregate; j++)
                {
                   Tflotte2[a-1][b-1]=70;
                    a++;
                }
            }

            c++;
    }

}

void affichage(char Tflotte1 [10][10], char Tflotte2 [10][10],  char Tradar1 [10][10], char Tradar2 [10][10])
{
    int v, x;

    system("cls");


    printf("Radar J1");
    printf("\n");

    for (v=0; v<10; v++)
    {
        for (x=0; x<10; x++)
        {
            printf("%c", Tradar1 [v][x]);
        }
        printf("\n");
    }

    printf("Joueur 1");
    printf("\n");

    for (v=0; v<10; v++)
    {
        for (x=0; x<10; x++)
        {
            printf("%c", Tflotte1 [v][x]);

        }
        printf("\n");
    }

    printf("Radar J2");
    printf("\n");

    for (v=0; v<10; v++)
    {
        for (x=0; x<10; x++)
        {
            printf("%c", Tradar2 [v][x]);
        }
        printf("\n");
    }

    printf("Joueur 2");
    printf("\n");

    for (v=0; v<10; v++)
    {
        for (x=0; x<10; x++)
        {
            printf("%c", Tflotte2 [v][x]);
        }
        printf("\n");
    }

}

void guerre(char Tflotte1 [10][10], char Tflotte2 [10][10],  char Tradar1 [10][10], char Tradar2 [10][10])
//BUT jouer la partie
//ENTREE les tableaux de radar et de flotte
//SORTIE
{
    int hitFlotte1, hitFlotte2;

    hitFlotte1=0;

    hitFlotte2=0;

    while((hitFlotte1<17)&&(hitFlotte2<17))
    {
        tourJ1(Tradar1, Tflotte2, &hitFlotte1, &hitFlotte2);

        affichage(Tflotte1, Tflotte2, Tradar1, Tradar2);

        tourJ2(Tradar2, Tflotte1, &hitFlotte1, &hitFlotte2);

        affichage(Tflotte1, Tflotte2, Tradar1, Tradar2);

    }

    if(hitFlotte1==hitFlotte)
    {
        printf("Le joueur 2 à gagner!");
    }else
    {
        printf("Le joueur 1 à gagner!");
    }

    ecritureVictoire (&Score);
}

void tourJ1(char Tradar1 [10][10], char Tflotte2 [10][10], int *hitFlotte1, int *hitFlotte2)
//BUT faire jouer son tour au joueur 1
//ENTREE des coordonées de tir
//SORTIE un marquage sur le radar et le terrain ennemi
{
    int Latt, Long;

    printf("Joueur 1, donnez les coordonnees de tir X");
    scanf("%d", &Latt);
    fflush(stdin);
    printf("Joueur 1, donnez les coordonnees de tir Y");
    scanf("%d", &Long);
    fflush(stdin);

    if((Tflotte2[Latt][Long]=='P')||(Tflotte2[Latt][Long]=='C')||(Tflotte2[Latt][Long]=='K')||(Tflotte2[Latt][Long]=='D')||(Tflotte2[Latt][Long]=='F'))
    {
        *hitFlotte2 = *hitFlotte2 + 1;
        Tflotte2[Latt][Long]=88;
        Tradar1[Latt][Long]=88;
    }else
    {
        Tflotte2[Latt][Long]=77;
        Tradar1[Latt][Long]=77;
    }

    /*if((hitPorteAvion2==5)&&(hitCroiseur12==3)&&(hitCroiseur22==3)&&(hitDestroyer2==4)&&(hitFregate2==2))
    {
        hitFlotte2=5;
    }*/

}

void tourJ2(char Tradar2 [10][10], char Tflotte1 [10][10], int *hitFlotte1, int *hitFlotte2)
//BUT faire jouer son tour au joueur 2
//ENTREE des coordonées de tir
//SORTIE un marquage sur le radar et le terrain ennemi
{
    int Latt, Long;

    printf("Joueur 2, donnez les coordonnees de tir X");
    scanf("%d", &Latt);
    fflush(stdin);
    printf("Joueur 2, donnez les coordonnees de tir Y");
    scanf("%d", &Long);
    fflush(stdin);

    if((Tflotte1[Latt][Long]=='P')||(Tflotte1[Latt][Long]=='C')||(Tflotte1[Latt][Long]=='K')||(Tflotte1[Latt][Long]=='D')||(Tflotte1[Latt][Long]=='F'))
    {
        *hitFlotte1 = *hitFlotte1 + 1;
        printf("HIT FLOTTE %d", *hitFlotte1);
        Tflotte1[Latt][Long]=88;
        Tradar2[Latt][Long]=88;


    }else
    {
        Tflotte1[Latt][Long]=77;
        Tradar2[Latt][Long]=77;
    }

}

void ecritureVictoire (FILE *score)
{
    char Text[30];

    Score=fopen("Score", "w");

    printf("Entrez le nom du vainceur et du perdant sous le format Vainceur:... Perdant:...\n");

    fprintf(Text, 30, stdin);

    fputs(Text, Score);

    fclose(Score);
}
