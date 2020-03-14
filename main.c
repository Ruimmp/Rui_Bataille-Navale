/*
 * Projet: Bataille Navale
 * Auteur: Rui Monteiro
 * Date début du code: 05.03.2020
 * Date fin du code:
 * Version du 13.03.20
 */

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>

void Title();

int main() {
    //variables
    int options;
    int continuer = 0;
    //variables

    char valide = "x";
    //cartes
    int carte1[10][10] = {
            {1, 1, 0, 1, 0, 0, 1, 1, 1, 1},
            {0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
            {1, 0, 0, 1, 0, 1, 1, 1, 0, 1},
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
            {0, 0, 0, 0, 0, 1, 0, 0, 0, 1},
            {1, 1, 0, 0, 0, 0, 0, 0, 0, 1},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 1, 1, 1, 1, 1, 1},
    };
    int carte2[10][10] = {
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    };
    int carte3[10][10] = {
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    };
    int carte4[10][10] = {
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    };
    int carte5[10][10] = {
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    };
    //cartes

    do {

        //affichage du mini menu principal
        printf("\n"
               ".----.   .--.  .---.  .--.  .-..-.   .-.   .----.   .-. .-.  .--.  .-. .-.  .--.  .-.   .----.\n"
               "| {}  } / {} \\{_   _}/ {} \\ | || |   | |   | {_     |  `| | / {} \\ | | | | / {} \\ | |   | {_  \n"
               "| {}  }/  /\\  \\ | | /  /\\  \\| || `--.| `--.| {__    | |\\  |/  /\\  \\\\ \\_/ //  /\\  \\| `--.| {__ \n"
               "`----' `-'  `-' `-' `-'  `-'`-'`----'`----'`----'   `-' `-'`-'  `-' `---' `-'  `-'`----'`----'");
        printf("\t\n"
               "                  __--___\n"
               "                 >_'--'__'\n"
               "                _________!__________\n"
               "               /   /   /   /   /   /\n"
               "              /   /   /   /   /   /\n"
               "             |   |   |   |   |   |\n"
               "        __^  |   |   |   |   |   |\n"
               "      _/@  \\  \\   \\   \\   \\   \\   \\\n"
               "     S__   |   \\   \\   \\   \\   \\   \\         __\n"
               "        |  |    \\___\\___\\___\\___\\___\\       /  \\\n"
               "        |   \\             |                |   / \n"
               "        \\    \\____________!________________/  /\n"
               "         \\ _______OOOOOOOOOOOOOOOOOOO________/\n"
               "          \\________\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\_______/\n\n"
                /* "%%%^^^^^%%%%%^^^^!!^%%^^^^%%%%%!!!!^^^^^^!%^^^%%%%!!^^\n"
                 "^^!!!!%%%%^^^^!!^^%%%%%^^!!!^^%%%%%!!!%%%%^^^!!^^%%%!!\n\n"*/);
        //affichage du mini menu principal


        //code(s) pour des fonctionalitées spéciales
        SetConsoleOutputCP(65001);  //pour les accents, etc...
        //code(s) pour des fonctionalitées spéciales

        //options du menu
        printf("Apuyez sur le numero désiré :\n");
        printf("1} +-+-+-+-+-+        2} +-+-+-+-+\n"
               "   |J|O|U|E|R|           |a|i|d|e|\n"
               "   +-+-+-+-+-+           +-+-+-+-+\n\n");
        printf("►");
        scanf("%d", &options);
        //options du menu

        //options de base
        if (options == 2)
            printf("Vous êtes sur un jeu de bataille navale.\n"
                   "Voici les règles du jeu :\n"
                   "Le but : Couler tous les bateaux adverses placés quelque part en mer (sur le plateau de jeu de 64 cases), avec des explosifs.\n"
                   "Il y a trois bateaux : de 1, 2, et 3 cases de long. Les bateaux ne touchent pas.\n"
                   "Pour essayer de toucher les bateaux, vous devez entrez la coordonnée de la case où vous voulez lancer un explosif (exemple: A5), puis tapez enter. Attention à bien rentrer la lettre en premier !\n"
                   "\n"
                   "Si le programme affiche « A l’eau », vous n’avez pas touché de bateau. Une croix s’affiche dans la case. \n"
                   "\n"
                   "Si le programme affiche « Touché », c’est que vous avez touché un bateau. La case se remplit d’un cercle.\n"
                   "\n"
                   "Si le programme affiche « Touché et coulé », ça signifie que le bateau entier à été touché et qu’il est donc coulé.\n"
                   "Toutes les cases s'affichent avec un carré blanc. Vous devez ensuite cherchez les autres bateaux."
                   "\n\n"
                   "Vous pouvez vous référer à la légende, pour la signification des symboles."
                   "\n\n"
                   "Si vous retirez sur une case que vous avez déjà visée, le programme vous avertira et vous laissera recommencer.\n"
                   "\n"
                   "Une fois que vous avez touché les 3 bateaux, la partie s'arrête et un message s’affiche vous annonçant que vous avez gagné.\n\n");
        else if (options == 1)
            //printf(carte1);
            for (int i = 0; i < 41; ++i) {
                printf("-");
            }
        printf("\n");
        for (int ligne = 0; ligne < 10; ++ligne) {
            for (int colonne = 0; colonne < 10; ++colonne) {
                if (carte1[ligne][colonne] == 1) {
                    printf("| %c ", valide);
                } else {
                    printf("|   ");
                }

            }
            printf("|\n");
            for (int i = 0; i < 41; ++i) {
                printf("-");
            }
            printf("\n");
            //options de base

            printf("Voulez-vous continuer à jouer?\n");
            printf("\n►");
            scanf("%d", &continuer);

            // si la perssonne ne veut plus continuer elle peut appuyer sur 2 et quitter le programme
            if (continuer == 2) {
                exit(0); //fontion pour sortir du programme
            } else if (continuer == 1) {
                system("cls"); //fontion pour nttoyer l'interface
            }
            // si la perssonne ne veut plus continuer elle peut appuyer sur 2 et quitter le programme

        }
    while (continuer = 1);

        system("pause");
        return 0;
    }

    while void Title(){
        printf("Bataille Navale\n");
    }}