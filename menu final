# SUDOKU-EILCO
Projet sudoku en langage C 
#include<stdio.h>
#include<stdlib.h>
#include "menu.h"
int choix,menu,min;

int verifierchoix(choix,max,min){ //verifie si le numero entrer par le jouer est dans l'intervalle autorisé
if (choix<min|| choix>max){
printf("oups choix non disponible\n");
} 
   if(choix>=min&&choix<=max){
   return 1;
   }  
   
   int afficherMenu(void){ // j'affiche le menu on raisonne en ligne
      printf("+================================================================+\n");
      printf("|                                                                |\n");
      printf("|                                                                |\n");
      printf("|     #####   ##   ##  ######   ######  ##   ##  ##   ##         |\n");
       printf("|   ##       ##   ##  ##   ## ##    ## ##  ##   ##   ##         |\n");
       printf(|     #####   ##   ##  ##   ## ##    ## #####    ##   ##         |\n");
       printf(|         ##  ##   ##  ##   ## ##    ## ##  ##   ##   ##         |\n");
       printf(|     #####    #####   ######   ######  ##   ##   #####          |\n");
       printf(|                                                                |\n");
       printf(|                  T H E   M I N D   G A M E                     |\n");
       printf("+================================================================+\n");
       printf("|                                                               |\n");
       printf("|                    BIENVENU, PLAYER                           |\n");
       printf("|                                                               |\n");
       printf("|               +--------------------------------+              |\n");
       printf("|               |         MENU  PRINCIPAL        |              |\n");
       printf("|               +--------------------------------+              |\n");
       printf("|               |                                |              |\n");
       printf("|               |    [ 01 ]  NOUVELLE PARTIE     |              |\n");
       printf("|               |                                |              |\n");
       printf("|               |    [ 02 ]  CHARGER LE JEU      |              |\n");
       printf("|               |                                |              |\n");
       printf("|               |    [ 03 ]  COMMENT JOUER       |              |\n");
       printf("|               |                                |              |\n");
       printf("|               |    [ 04 ]  SORTIE              |              |\n");
       printf("|               |                                |              |\n");
       printf("|               +--------------------------------+              |\n");
       printf("|                                                               |\n");
       printf("|                    ENTREZ VOTRE CHOIX                         |\n");
       printf("|                                                               |\n");
       printf("|                         [  _  ]                               |\n");
       printf("|                                                               |\n");
       printf("+================================================================+"\n");
       printf("|                                                               |\n");
       printf("|          LOGIQUE  -  STRATEGIE  -  CONCENTRATION             |\n");
       printf("|                    EILCO  |  2026-2027                        |\n");
       printf("+================================================================+\n");
       printf("Entrez votre choix svp\n");
//
       int afficherSousMenu(void){
     int choix;
      printf("               +--------------------------------+              \n");
      printf("               |        SOUS MENU               |              \n");
        printf("             +--------------------------------+              \n");
         printf("            |                                |              \n");
           printf("          |    [ 01 ]  FACILE              |              \n");
            printf("         |                                |              \n");
             printf("        |    [ 02 ]  MOYEN               |              \n");
               printf("      |                                |              \n");
               printf("      |    [ 03 ]  COMMENT JOUER       |              \n");
                 printf("    |                                |              \n");
                  printf("   |    [ 04 ]  SORTIE              |              \n");
                   printf("  |                                |              \n");
                    printf(" +--------------------------------+              \n");
                     printf("|       ENTREZ VOTRE CHOIX       |\n");
                     printf("+--------------------------------+              \n");
                     if (choix==1)
                     {
                         printf("Entrez votre choix svp:\n");
                      scanf("%d",&choix);
                     } 
 void gererNavigation(void){
 int choix = afficherMenu() // renvoi le choix entrer par le joueur 
 switch (choix){
 case 1:
 afficherSousmenu();
 break;
 case 2:
 printf("chargement de partie...\n");
 break;
 case 3:
  printf("\n===== COMMENT JOUER AU SUDOKU =====\n");
    printf("1. Chaque ligne doit contenir les chiffres de 1 a 9.\n");
    printf("2. Chaque colonne doit contenir les chiffres de 1 a 9.\n");
    printf("3. Chaque bloc de 3x3 doit contenir les chiffres de 1 a 9.\n");
    break;
    case 4:
    printf("\nMerci d'avoir joue au Sudoku !\n");
    printf("A bientot !\n");
    break;
    default:
    printf("\nChoix invalide ! Veuillez choisir entre 1 et 4.\n");
    break;
    }
