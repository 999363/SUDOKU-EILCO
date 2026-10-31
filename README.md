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
   
