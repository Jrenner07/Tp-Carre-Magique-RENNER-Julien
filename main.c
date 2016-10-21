#include <stdio.h>
#include <stdlib.h>

int main()
{
    int longueur=0;
    int largeur=0;
    int i=0;
    int j=0;


    printf("Entrez la largeur du carre\n");
    scanf("%d",&largeur); // Recupere la valeur de la largeur
    printf("Entrez la longueur du carre\n");
    scanf("%d",&longueur); // Recupere la valeur de la longueur

    for (i=0 ; i<longueur ; i++){
        for (j=0 ; j<largeur ; j++){
                //Dessin de la première et dernière ligne en #
            if (i==0 || i==longueur-1){
                printf("#");

                //Dessin de la première et dernière colone en #
            } else if (j==0 || j==largeur-1){
                printf("#");

                //Remplissage du carré en .
            } else if (j!=0 || j!=largeur-1){
                printf(".");
            }

        }

        printf("\n"); //Retours à la ligne en fin de largeur
    }




    return 0;
}



/*
Algo Carre_magique

BUT = Dessiner un carre avec des unités donner par l'utilisateur
ENTRER = Donner saisie par l'utilisateur
SORTIE = Un carrer au normes de l'utilisateur

Variables
Longueur,largeur,i,j = ENTIER


DEBUT

    ECRIRE Veuillez entrer la largeur du carré
    LIRE largeur
    ECRIRE Veuillez entrer la longueur du carré
    LIRE longueur

    POUR i de 0 a longueur FAIRE
        POUR j de 0 a largeur FAIRE
            SI i=0 OU i=longueur-1 ALORS
                ECRIRE #
            FINSI
            SAUF SI j=0 OU j=largeur-1 ALORS
                ECRIRE #
            FINSI
            SAUF SI j <> 0 OU j <> largeur-1 ALORS
                ECRIRE .
            FINSI
        FINPOUR

        ECRIRE

    FINPOUR

FIN


*/
