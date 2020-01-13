#include "Flotte.h"

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
