/*
 * ============================================================================
 *  controle_saisie.c - Contrôle de saisie d'un chiffre entre 1 et 9
 * ============================================================================
 */

#include <stdio.h>

/* vider_buffer : supprime ce que l'utilisateur a tapé en trop */
void vider_buffer(void)
{
    int c;

    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

/*
 * saisir_chiffre : demande un chiffre entre 1 et 9.
 * Si la saisie est incorrecte (lettre, 0, 10, -3...), un message d'erreur
 * s'affiche et on redemande, jusqu'à obtenir une valeur correcte.
 * La fonction renvoie le chiffre saisi.
 */
int saisir_chiffre(void)
{
    int valeur = 0;     /* le nombre tapé par l'utilisateur          */
    int retour;         /* résultat de scanf : 1 si un nombre a été lu */
    int correct;        /* 1 si la saisie est bonne, 0 sinon         */

    do {
        printf("Entrez un chiffre entre 1 et 9 : ");
        retour = scanf("%d", &valeur);
        vider_buffer();     /* on jette le reste de la ligne */

        /*
         * La saisie est mauvaise si :
         *  - scanf n'a pas lu de nombre (l'utilisateur a tapé une lettre)
         *  - OU le nombre est plus petit que 1
         *  - OU le nombre est plus grand que 9
         */
        if (retour != 1 || valeur < 1 || valeur > 9) {
            printf("Erreur : vous devez entrer un chiffre de 1 à 9.\n");
            correct = 0;
        } else {
            correct = 1;
        }
    } while (correct == 0);     /* on recommence tant que c'est faux */

    return valeur;
}

/* Petit programme pour tester la fonction */
int main(void)
{
    int chiffre;

    chiffre = saisir_chiffre();
    printf("Vous avez entré : %d\n", chiffre);

    return 0;
}
