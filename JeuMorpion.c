//Morpion (Tic Tac Toe)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Pour vérifier si l'un des joueur a gagné et si c'est le cas afficher qui a gagné
int comb_gagnante(int Grille[3][3])
{
    int s1, s2, s3, s4, s5, s6, s7, s8;

    s1 = Grille[0][0] + Grille[0][1] + Grille[0][2];
    s2 = Grille[1][0] + Grille[1][1] + Grille[1][2];
    s3 = Grille[2][0] + Grille[2][1] + Grille[2][2];
    s4 = Grille[0][0] + Grille[1][0] + Grille[2][0];
    s5 = Grille[0][1] + Grille[1][1] + Grille[2][1];
    s6 = Grille[0][2] + Grille[1][2] + Grille[2][2];
    s7 = Grille[0][0] + Grille[1][1] + Grille[2][2];
    s8 = Grille[0][2] + Grille[1][1] + Grille[2][0];
    if (s1 == 3 || s2 == 3 || s3 == 3 || s4 == 3 || s5 == 3 || s6 == 3 || s7 == 3 || s8 == 3)
    {
        gotoxy(37,9);
        textcolor(14);
        printf("Joueur ");
        textcolor(12);
        printf("%c%c",219,219);
        textcolor(14);
        printf(" a gagne.\n\n\n\n\n");
        return 1;
    }
    if (s1 == 0 || s2 == 0 || s3 == 0 || s4 == 0 || s5 == 0 || s6 == 0 || s7 == 0 || s8 == 0)
    {
        gotoxy(37,9);
        textcolor(14);
        printf("Joueur ");
        textcolor(1);
        printf("%c%c",219,219);
        textcolor(14);
        printf(" a gagne.\n\n\n\n\n");
        return 1;
    }
    return 0;
}
//Vérifier s'il n'y a plus de mouvement possible et si c'est le cas afficher Egalité
int pas_mouvement_possible(int Grille[3][3])
{
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            if (Grille[i][j]== 4)
            {
                return 0;
            }
        }
    }
    gotoxy(37,9);
    textcolor(14);
    printf("Egalite!!\n\n\n\n\n");
    return 1;
}

//Afficher la grille
void afficher_grille(int Grille[3][3])
{
    textcolor(14); //La couleur du texte
    gotoxy(8,1);
    printf("0      1       2");
    printf("\n    +====================+          *********************************\n");
    for (int i=1;i<12;i++){
        textcolor(14);
        printf("    ");
        for (int j=0;j<13;j++){
            if (i==4 && j==12){
                textcolor(14);
                printf("|          *********************************");
            }
            else if (i==3 && j==12){
                textcolor(14);
                printf("|          *               *               *");
            }
            else if (i==2 && j==12){
                textcolor(14);
                printf("|          * Joueur 1 : ");
                textcolor(12);
                printf("%c%c",219,219);
                textcolor(14);
                printf(" * Joueur 2 : ");
                textcolor(1);
                printf("%c%c",219,219);
                textcolor(14);
                printf(" *",219);
            }
            else if (i==1 && j==12){
                textcolor(14);
                printf("|          *               *               *");
            }
            else if (i==2 && j==2){
                if (Grille[0][0]==0){
                    textcolor(1);
                    printf("%c%c",219,219);
                }
                if (Grille[0][0]==1){
                    textcolor(12);
                    printf("%c%c",219,219);
                }
                if (Grille[0][0]==4){
                    textcolor(14);
                    printf("  ");
                }
            }
            else if (i==2 && j==6){
                if (Grille[0][1]==0){
                    textcolor(1);
                    printf("%c%c",219,219);
                }
                if (Grille[0][1]==1){
                    textcolor(12);
                    printf("%c%c",219,219);
                }
                if (Grille[0][1]==4){
                    textcolor(14);
                    printf("  ");
                }
            }
            else if (i==2 && j==10){
                if (Grille[0][2]==0){
                    textcolor(1);
                    printf("%c%c",219,219);
                }
                if (Grille[0][2]==1){
                    textcolor(12);
                    printf("%c%c",219,219);
                }
                if (Grille[0][2]==4){
                    textcolor(14);
                    printf("  ");
                }
            }
            else if (i==6 && j==2){
                if (Grille[1][0]==0){
                    textcolor(1);
                    printf("%c%c",219,219);
                }
                if (Grille[1][0]==1){
                    textcolor(12);
                    printf("%c%c",219,219);
                }
                if (Grille[1][0]==4){
                    textcolor(14);
                    printf("  ");
                }
            }
            else if (i==6 && j==6){
                if (Grille[1][1]==0){
                    textcolor(1);
                    printf("%c%c",219,219);
                }
                if (Grille[1][1]==1){
                    textcolor(12);
                    printf("%c%c",219,219);
                }
                if (Grille[1][1]==4){
                    textcolor(14);
                    printf("  ");
                }
            }
            else if (i==6 && j==10){
                if (Grille[1][2]==0){
                    textcolor(1);
                    printf("%c%c",219,219);
                }
                if (Grille[1][2]==1){
                    textcolor(12);
                    printf("%c%c",219,219);
                }
                if (Grille[1][2]==4){
                    textcolor(14);
                    printf("  ");
                }
            }
            else if (i==10 && j==2){
                if (Grille[2][0]==0){
                    textcolor(1);
                    printf("%c%c",219,219);
                }
                if (Grille[2][0]==1){
                    textcolor(12);
                    printf("%c%c",219,219);
                }
                if (Grille[2][0]==4){
                    textcolor(14);
                    printf("  ");
                }
            }
            else if (i==10 && j==6){
                if (Grille[2][1]==0){
                    textcolor(1);
                    printf("%c%c",219,219);
                }
                if (Grille[2][1]==1){
                    textcolor(12);
                    printf("%c%c",219,219);
                }
                if (Grille[2][1]==4){
                    textcolor(14);
                    printf("  ");
                }
            }
            else if (i==10 && j==10){
                if (Grille[2][2]==0){
                    textcolor(1);
                    printf("%c%c",219,219);
                }
                if (Grille[2][2]==1){
                    textcolor(12);
                    printf("%c%c",219,219);
                }
                if (Grille[2][2]==4){
                    textcolor(14);
                    printf("  ");
                }
            }
            else if (j==0 || j==4 || j==8 || j==12){
                textcolor(14);
                printf("|");
            }
            else if ((i==4 || i==8) && (j!=0) && (j!=4) && (j!=8) && (j!=12)){
                textcolor(14);
                printf("==");
            }
            else{
                textcolor(14);
                printf("  ");
            }

        }
        printf("\n");
    }
    textcolor(14);
    printf("    +====================+\n\n");
    gotoxy(2,4);
    printf("0");
    gotoxy(2,8);
    printf("1");
    gotoxy(2,12);
    printf("2");
}

int main()
{
    int Grille[3][3],ligne,colonne;
    FILE *fichier = fopen("Historique.txt", "w");// fichier pour sauvegarder l'historique des parties
    fprintf(fichier,"Nouvelle Partie : \n");
    for (int i=0; i<3; i++) //remplir la grille par des cases vides
    {
        for (int j=0; j<3; j++)
        {
            Grille[i][j] = 4;
        }
    }
    afficher_grille(Grille);
    for (int i=0;i<9;i++) //demander aux joueurs de faire un mouvement et remplir la grille
    {
        gotoxy(37,9);
        textcolor(14);
        printf("Joueur 1 :");
        textcolor(12);
        printf("%c%c \n",219,219);
        textcolor(14);
        gotoxy(39,10);
        printf("Coordonnees [0 - 2][0 - 2] ? : \n");
        gotoxy(39,11);
        printf("[   ,   ]");
        gotoxy(41,11);
        scanf("%d",&ligne);
        gotoxy(45,11);
        scanf("%d",&colonne);
        int k = 0;
        while (1){
            if (Grille[ligne][colonne] == 1 || Grille[ligne][colonne] == 0)
            {
                textcolor(14);
                gotoxy(37,12 + 5*k);
                printf("Case occupee.\n\n");
                gotoxy(37,14 + 5*k);
                textcolor(14);
                printf("Joueur 1 :");
                textcolor(12);
                printf("%c%c \n",219,219);
                gotoxy(39,15 + 5*k);
                textcolor(14);
                printf("Coordonnees [0 - 2][0 - 2] ? : \n");
                gotoxy(39,16 + 5*k);
                printf("[   ,   ]");
                gotoxy(41,16 + 5*k);
                scanf("%d",&ligne);
                gotoxy(45,16 + 5*k);
                scanf("%d",&colonne);
                k = k + 1;
            }
            else if (ligne > 2 || ligne < 0 || colonne > 2 || colonne < 0 )
            {
                gotoxy(37,12 + 5*k);
                textcolor(14);
                printf("Vous avez fait une faute.\n\n");
                gotoxy(37,14 + 5*k);
                textcolor(14);
                printf("Joueur 1 :");
                textcolor(12);
                printf("%c%c \n",219,219);
                gotoxy(39,15 + 5*k);
                textcolor(14);
                printf("Coordonnees [0 - 2][0 - 2] ? : \n");
                gotoxy(39,16 + 5*k);
                printf("[   ,   ]");
                gotoxy(41,16 + 5*k);
                scanf("%d",&ligne);
                gotoxy(45,16 + 5*k);
                scanf("%d",&colonne);
                k = k + 1;
            }
            else{
                break;
            }
        }
        fprintf(fichier, "Le joueur 1 a joué : [ %d , %d ].\n",ligne,colonne);
        Grille[ligne][colonne] = 1;
        system("cls"); //effacer la console
        afficher_grille(Grille);
        if ((comb_gagnante(Grille) == 1) || (pas_mouvement_possible(Grille) == 1))
        {
            break;
        }
        gotoxy(37,9);
        textcolor(14);
        printf("Joueur 2 :");
        textcolor(1);
        printf("%c%c \n",219,219);
        textcolor(14);
        gotoxy(39,10);
        printf("Coordonnees [0 - 2][0 - 2] ? : \n");
        gotoxy(39,11);
        printf("[   ,   ]");
        gotoxy(41,11);
        scanf("%d",&ligne);
        gotoxy(45,11);
        scanf("%d",&colonne);
        while (1){
            int k = 0;
            if (Grille[ligne][colonne] == 1 || Grille[ligne][colonne] == 0)
            {
                gotoxy(37,12 + 5*k);
                textcolor(14);
                printf("Case occupee.\n\n");
                gotoxy(37,14+ 5*k);
                textcolor(14);
                printf("Joueur 2 :");
                textcolor(1);
                printf("%c%c \n",219,219);
                gotoxy(39,15 + 5*k);
                textcolor(14);
                printf("Coordonnees [0 - 2][0 - 2] ? :  ");
                gotoxy(39,16 + 5*k);
                printf("[   ,   ]");
                gotoxy(41,16 + 5*k);
                scanf("%d",&ligne);
                gotoxy(45,16 + 5*k);
                scanf("%d",&colonne);
                k = k + 1;
            }
            else if (ligne > 2 || ligne < 0 || colonne > 2 || colonne < 0 )
            {
                gotoxy(37,12 + 5*k);
                textcolor(14);
                printf("Vous avez fait une faute.\n\n");
                gotoxy(37,14 + 5*k);
                textcolor(14);
                printf("Joueur 2 :");
                textcolor(1);
                printf("%c%c \n",219,219);
                gotoxy(39,15 + 5*k);
                textcolor(14);
                printf("Coordonnees [0 - 2][0 - 2] ? : \n");
                gotoxy(39,16 + 5*k);
                printf("[   ,   ]");
                gotoxy(41,16 + 5*k);
                scanf("%d",&ligne);
                gotoxy(45,16 + 5*k);
                scanf("%d",&colonne);
                k = k + 1;
            }
            else {
                break;
            }
        }
        fprintf(fichier, "Le joueur 2 a joué : [ %d , %d ].\n",ligne,colonne);
        Grille[ligne][colonne] = 0;
        system("cls");
        afficher_grille(Grille);
        if ((comb_gagnante(Grille) == 1) || (pas_mouvement_possible(Grille) == 1))
        {
            break;
        }
    }
    fclose(fichier);
    getch();
    return 0;
}
