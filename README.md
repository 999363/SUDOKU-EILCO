# SUDOKU-EILCO
Projet sudoku en langage C 
#include<stdio.h>
#include<stdlib.h>
#include "menu.h"
int choix,menu,min;

int verifierchoix(choix,max,min){ //verifie si le numero entrer par le jouer est dans l'intervalle autorisé
if (choix<min|| choix>max){
return 0;
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
