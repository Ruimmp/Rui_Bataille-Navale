/*
 * Projet: Bataille Navale
 * Auteur: Rui Monteiro
 * Date début du code: 05.03.2020
 * Date fin du code:
 */

#include <stdio.h>
#include <windows.h>

int main()
{
    //affichage du mini menu principal
        printf(".----.   .--.  .---.  .--.  .-..-.   .-.   .----.   .-. .-.  .--.  .-. .-.  .--.  .-.   .----.\n"
           "| {}  } / {} \\{_   _}/ {} \\ | || |   | |   | {_     |  `| | / {} \\ | | | | / {} \\ | |   | {_  \n"
           "| {}  }/  /\\  \\ | | /  /\\  \\| || `--.| `--.| {__    | |\\  |/  /\\  \\\\ \\_/ //  /\\  \\| `--.| {__ \n"
           "`----' `-'  `-' `-' `-'  `-'`-'`----'`----'`----'   `-' `-'`-'  `-' `---' `-'  `-'`----'`----");
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


    //variables
    int options;
    //variables

    //code(s) pour des fonctionalitées spéciales
    SetConsoleOutputCP(65001);  //pour les accents, etc...
    //code(s) pour des fonctionalitées spéciales

    //options du menu
    printf("Apuyez sur le numero désiré :\n");
    printf("1} +-+-+-+-+-+        2} +-+-+-+-+\n"
           "   |J|O|U|E|R|           |a|i|d|e|\n"
           "   +-+-+-+-+-+           +-+-+-+-+\n\n");
    printf("►");
    scanf("%d",&options);
    //options du menu

    //options de base
    if (options==1)
        printf("Aloonz-y:");
    else if (options==2)
        printf("\n\nVous êtes sur un jeu de bataille navale.\n"
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
               "Une fois que vous avez touché les 3 bateaux, la partie s'arrête et un message s’affiche vous annonçant que vous avez gagné.");
    //options de base

    system("pause");
    return 0;
}

//comandes importantes pour la suite