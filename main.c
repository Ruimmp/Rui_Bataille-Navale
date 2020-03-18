/*
 * Projet: Bataille Navale
 * Auteur: Rui Monteiro
 * Date début du code: 05.03.2020
 * Date fin du code (version 1.0):
 * Version du 18.03.2020
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>


int main() {
  char *val = "X";

  // variables
  int options;
  int continuer;
  int line;
  int colonne;
  // variables

  // variables à 0
  continuer = 0;
  options = 0;
  // variables à 0

  // cartes
  int carte1[10][10] = {
      {0,0,0,1,0,0,0,1,1,1},
      {0,0,0,1,0,0,0,0,0,0},
      {1,0,0,1,0,0,0,0,0,0},
      {1,0,0,0,0,0,0,0,0,0},
      {1,0,0,0,0,0,0,0,0,0},
      {1,0,0,0,0,1,0,0,0,0},
      {0,0,0,0,0,1,0,0,0,0},
      {0,0,0,0,0,0,0,0,0,0},
      {0,0,0,0,0,0,0,0,0,0},
      {0,0,0,0,0,1,1,1,1,1},
  };
  // cartes
  do {
    // affichage du mini menu principal
    printf("\n"
           ".----.   .--.  .---.  .--.  .-..-.   .-.   .----.   .-. .-.  .--.  "
           ".-. .-.  .--.  .-.   .----.\n"
           "| {}  } / {} \\{_   _}/ {} \\ | || |   | |   | {_     |  `| | / {} "
           "\\ | | | | / {} \\ | |   | {_  \n"
           "| {}  }/  /\\  \\ | | /  /\\  \\| || `--.| `--.| {__    | |\\  |/  "
           "/\\  \\\\ \\_/ //  /\\  \\| `--.| {__ \n"
           "`----' `-'  `-' `-' `-'  `-'`-'`----'`----'`----'   `-' `-'`-'  "
           "`-' `---' `-'  `-'`----'`----'");
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
    // affichage du mini menu principal

    // code(s) pour des fonctionalitées spéciales
    SetConsoleOutputCP(65001); // pour les accents, etc...
    // code(s) pour des fonctionalitées spéciales

    // options du menu
    printf("Apuyez sur le numero désiré :\n");
    printf("1} +-+-+-+-+-+        2} +-+-+-+-+        3} +-+-+-+-+-+-+\n"
           "   |J|O|U|E|R|           |a|i|d|e|           |S|c|o|r|e|s|\n"
           "   +-+-+-+-+-+           +-+-+-+-+           +-+-+-+-+-+-+\n\n");
    printf("►");
    scanf("%d", &options);
    // options du menu

    // options de base

    if (options > 3) {
      printf("Entrez de bonnes valeures\n");
    }
    else if (options == 3)
    {
      printf("\n\n\nPAS ENCORE AU POINT!!!\n\n\n");
    }

    else if (options == 2) {
      printf("Vous êtes sur un jeu de bataille navale.\n"
             "Voici les règles du jeu :\n"
             "Le but : Couler tous les bateaux adverses placés quelque part en "
             "mer (sur le plateau de jeu de 100 cases), avec des explosifs.\n"
             "Il y a cinc bateaux. Les bateaux ne touchent pas.\n"
             "Pour essayer de toucher les bateaux, vous devez entrez la "
             "coordonnée de la case où vous voulez lancer un explosif "
             "(exemple: ligne:1 colone:6), puis tapez enter. Attention à bien rentrer la "
             "lettre en premier !\n"
             "\n"
             /*"Si le programme affiche « A l’eau », vous n’avez pas touché de "
             "bateau. Une croix s’affiche dans la case. \n"
             "\n"
             "Si le programme affiche « Touché », c’est que vous avez touché "
             "un bateau. La case se remplit d’un cercle.\n"
             "\n"
             "Si le programme affiche « Touché et coulé », ça signifie que le "
             "bateau entier à été touché et qu’il est donc coulé.\n"
             "Toutes les cases s'affichent avec un carré blanc. Vous devez "
             "ensuite cherchez les autres bateaux."
             "\n\n"
             "Vous pouvez vous référer à la légende, pour la signification des "
             "symboles."
             "\n\n"
             "Si vous retirez sur une case que vous avez déjà visée, le "
             "programme vous avertira et vous laissera recommencer.\n"
             "\n"
             "Une fois que vous avez touché les 3 bateaux, la partie s'arrête "
             "et un message s’affiche vous annonçant que vous avez gagné.\n\n"*/);
    }

    else if (options == 1) {

      while (1)
      {
      system("cls");

      printf("\nVoici votre carte Chef.\n");
      printf("Essayez de couler tous les bateaux.\n");
      printf("Bonne chance. \n\n\n");
      // affichage de la carte
      printf("  1   2   3   4   5   6   7   8   9   10   \n");
      for (int i = 0; i < 41; ++i)
      {
        printf("═");
      }
      printf("\n");
      for (int line = 0; line < 10; ++line)
      {
        for (int colonne = 0; colonne < 10; ++colonne)
        {
          if (carte1[line][colonne] == 9)
          {
            printf("║ %d ", val);
          } else
            {
            printf("║   ");
          }
        }
        printf("║\n");
        for (int i = 0; i < 41; ++i)
        {
          printf("═");
        }
        printf("\n");
      }
      do
        {
        printf("\nEntrez une ligne : ");
        scanf("%d", &line);
      }while (line < 1 || line > 10);  //si la valeur est plus petite que 1 ou "||" plus grande que 10 le programme redemendera la ligne
      do
        {
        printf("\nEntrez une colonne : ");
        scanf("%d", &colonne);
       }while (colonne < 1 || colonne > 10);

        if (carte1[line - 1][colonne - 1] == 1) {
          carte1[line - 1][colonne - 1] = 2;
          printf ("\n\nBien joué, touché!\n");
          //avant de redemander à l'utilisateur de nouvelles valeures, le programme attends 2s
          Sleep(2000);
        } else{
          printf("\n\nBonne tentative!\n");
          Sleep(2000);
        }
    }}
    // affichage de la carte
    // options de base

    // question pour savoir si la personne souhaite continuer ou pas
    printf("Voulez-vous continuer à jouer?\n");
    printf("\n"
           "1}                             2}\n      "
           " ____        _               _   __          \n"
           "      / __ \\__  __(_)             / | / /___  ____\n"
           "     / / / / / / / /             /  |/ / __ \\/ __ \\\n"
           "    / /_/ / /_/ / /             / /|  / /_/ / / / /\n"
           "    \\____/\\__,_/_/             /_/ |_/\\____/_/ /_/ \n");
    printf("\n►");
    scanf("%d", &continuer);
    // question pour savoir si la personne souhaite continuer ou pas

    // si la perssonne ne veut plus continuer elle peut appuyer sur 2 et
    // quitter le programme
    if (continuer == 2) {
      exit(0); // fontion pour sortir du programme
    } else if (continuer == 1) {
      system("cls"); // fontion pour nttoyer l'interface
    }
    // si la perssonne ne veut plus continuer elle peut appuyer sur 2 et
    // quitter le programme
  }
  while (continuer = 1);
  system("pause");
  return 0;
}

