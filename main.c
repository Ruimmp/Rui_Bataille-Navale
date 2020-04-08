/*
 * Projet: Bataille Navale
 * Auteur: Rui Monteiro
 * Date début du code: 05.03.2020
 * Version : 0.2
 * Date fin du code (version 1.0):
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>

// crétation du menu principal
void Menu();
void planjeu(int table[10][10]);
void jeu();
void menuaide();
void scanfclear();
// crétation du menu principal

int main() {
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleTitle("Bataille Navale");
  // afficher menu
  system("cls"); // fonction pour renitialiser l'interface
  Menu();

  return 0;
}

void Menu() {
  system("cls");
  int options;

  do {
    system("cls");
    printf("\n"
           ".----.   .--.  .---.  .--.  .-..-.   .-.   .----.   .-. .-.  .--.  "
           ".-. .-.  .--.  .-.   .----.\n"
           "| {}  } / {} \\{_   _}/ {} \\ | || |   | |   | {_     |  `| | / {} "
           "\\ | | | | / {} \\ | |   | {_  \n"
           "| {}  }/  /\\  \\ | | /  /\\  \\| || `--.| `--.| {__    | |\\  |/  "
           "/\\  \\\\ \\_/ //  /\\  \\| `--.| {__ \n"
           "`----' `-'  `-' `-' `-'  `-'`-'`----'`----'`----'   `-' `-'`-'  "
           "`-' `---' `-'  `-'`----'`----'");
    printf(
        "\t\n"
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
        "          \\________\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\_______/\n\n");
    printf("Apuyez sur le numero désiré :\n");
    printf("1} +-+-+-+-+-+        2} +-+-+-+-+        3} +-+-+-+-+-+-+\n"
           "   |J|O|U|E|R|           |a|i|d|e|           |S|c|o|r|e|s|\n"
           "   +-+-+-+-+-+           +-+-+-+-+           +-+-+-+-+-+-+\n\n");
    printf("►");
    scanf("%d", &options);
    scanfclear();
  } while (options < 1 || options > 3);

  switch (options) {
  case 1:
    // menu de jeu
    jeu();
    break;
  case 2:
    system("cls");
    // affichage d'aide
    menuaide();
    system("cls");
    break;
  default:
    printf("Entrez une valeur valable.");
    break;
  }
}
// afficher menu
// création du jeu
void jeu() {
  system("cls");

  char valeurhor = 0;
  int ligne;
  int emplacement;
  int penichecoule = 0, voilier1coule = 0, voilier2coule = 0, cargocoule = 0,
      chalutiercoule = 0;
  //  petit(2)     medium(3)     medium(3)     énorme(5)    grand(4)

  // création du tableau
  int carte1[10][10] = {0};
  // création du tableau

  // voilier1
  carte1[4][4] = 1;
  carte1[4][5] = 1;
  carte1[4][6] = 1;
  // voilier1
  // voilier2
  carte1[6][3] = 1;
  carte1[7][3] = 1;
  carte1[8][3] = 1;
  // voilier2
  // chalutier
  carte1[9][1] = 1;
  carte1[9][2] = 1;
  carte1[9][3] = 1;
  carte1[9][4] = 1;
  // chalutier
  // peniche
  carte1[5][9] = 1;
  carte1[6][9] = 1;
  // peniche
  // cargo
  carte1[2][1] = 1;
  carte1[2][2] = 1;
  carte1[2][3] = 1;
  carte1[2][4] = 1;
  carte1[2][5] = 1;
  // cargo

  do {
    planjeu(carte1);

    do {
      printf("\n\nSur quelle coordonnée horizontale voulez-vous tirer ? (1-10)");
      printf("\n►");
      scanf("%d", &ligne);
      scanfclear();
    } while (ligne < 1 || ligne > 10);
    do {
      printf("\nSur quelle coordonnée verticale voulez-vous tirer ? (A-J)");
      printf("\n►");
      scanf("%c", &valeurhor);
      scanfclear();
    } while (valeurhor < 65 || valeurhor > (65 + 10));

    if (carte1[ligne - 1][valeurhor - 65] == 1) {
      carte1[ligne - 1][valeurhor - 65] = 2;
      printf("\n\nBien joué, vous avez touché une partie d'un des bateaux!!\n");
      Sleep(1050); // fontion pour pause le programme en temps choisi (dans ce
                   // cas 1 secondes)
    }
    if (carte1[ligne - 1][valeurhor - 65] == 0) {
      carte1[ligne - 1][valeurhor - 65] = 3;
      printf("\n\nBonne tentative!\n");
      Sleep(1050);
    }

    if (carte1[4][4] == 2 && carte1[4][5] == 2 && carte1[4][6] == 2) {
      // voilier1
      carte1[4][4] = 4;
      carte1[4][5] = 4;
      carte1[4][6] = 4;
      voilier1coule = 1;
    }
    if (carte1[6][3] == 2 && carte1[7][3] == 2 && carte1[8][3] == 2) {
      // voilier2
      carte1[6][3] = 4;
      carte1[7][3] = 4;
      carte1[8][3] = 4;
      voilier2coule = 2;
    }
    if (carte1[9][1] == 2 && carte1[9][2] == 2 && carte1[9][3] == 2 &&
        carte1[9][4] == 2) {
      // chalutier
      carte1[9][1] = 4;
      carte1[9][2] = 4;
      carte1[9][3] = 4;
      carte1[9][4] = 4;
      chalutiercoule = 1;
    }
    if (carte1[5][9] == 2 && carte1[6][9] == 2) {
      // peniche
      carte1[5][9] = 4;
      carte1[6][9] = 4;
      penichecoule = 1;
    }
    if (carte1[2][1] == 2 && carte1[2][2] == 2 && carte1[2][3] == 2 &&
        carte1[2][4] == 2 && carte1[2][5] == 2) {
      // cargo
      carte1[2][1] = 4;
      carte1[2][2] = 4;
      carte1[2][3] = 4;
      carte1[2][4] = 4;
      carte1[2][5] = 4;
      cargocoule = 1;
    }
  } while (!(voilier1coule == 1 && voilier2coule == 1 && chalutiercoule == 1 &&
             penichecoule == 1 && cargocoule == 1));
  printf("Vous avez touché tous les bateaux !!\n\n\n");
  printf("\n"
         " __   __   __     ______     ______   ______     __     ______     "
         "______    \n"
         "/\\ \\ / /  /\\ \\   /\\  ___\\   /\\__  _\\ /\\  __ \\   /\\ \\   "
         "/\\  == \\   /\\  ___\\   \n"
         "\\ \\ \\'/   \\ \\ \\  \\ \\ \\____  \\/_/\\ \\/ \\ \\ \\/\\ \\  \\ "
         "\\ \\  \\ \\  __<   \\ \\  __\\   \n"
         " \\ \\__|    \\ \\_\\  \\ \\_____\\    \\ \\_\\  \\ \\_____\\  \\ "
         "\\_\\  \\ \\_\\ \\_\\  \\ \\_____\\ \n"
         "  \\/_/      \\/_/   \\/_____/     \\/_/   \\/_____/   \\/_/   \\/_/ "
         "/_/   \\/_____/ \n"
         "                                                                     "
         "        ");

  system("pause");
}
// création du jeu

// créatio de l'aide
void menuaide() {
  system("cls");

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

  system("pause");
}
// créatio de l'aide

// création de l'affichage du jeu
void planjeu(int table[10][10]) {
  system("cls");
  printf("     A   B   C   D   E   F   G   H   I   J\n");
  printf("   ");
  for (int line = 0; line < 41; ++line) {
    printf("=");
  }
  printf("\n");
  for (int lineup = 0; lineup < 10; ++lineup) {
    printf("%3d", lineup + 1);
    for (int i = 0; i < 10; ++i) {
      switch (table[lineup][i]) {
      case 0:
        printf("║   ");
        break;

      case 1:
        printf("║   ");
        break;

      case 2:
        printf("║ ! ");
        break;

      case 3:
        printf("║ ~ ");
        break;

      case 4:
        printf("║ 0 ");
        break;
      }
    }
    printf("║\n");
    printf("   ");
    for (int col = 0; col < 41; ++col)
      printf("=");
    printf("\n");
  }
  printf("\n");
}
// création de l'affichage du jeu

void scanfclear() {
  // variable temporaire
  int voider;

  while ((voider = getchar()) != EOF && voider != '\n')
    ;
}