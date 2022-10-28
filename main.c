#include <stdio.h>
#include <stdlib.h>
#include "tp3.h"



int main()
{
  //int* *t=(int*) malloc(10*sizeof(int*)); //
int N,M;
printf("Veuillez saisir N le nombre des lignes  puis M le nombre des colonnes respectivement : \n");
scanf("%d %d",&N,&M);
matrice_creuse* matrice=creerMatriceCeuse(N,M);
matrice_creuse* matrice2=creerMatriceCeuse(N,M);
printf("veuillez saisir la premiere matrice : \n");
remplirMatrice(matrice,N,M);
//printf("veuillez saisir la deuxième matrice : \n");
//remplirMatrice(matrice2,N,M);
afficherMatrice(*matrice);
afficherMatriceListes(*matrice);
//int x=rechercherValeur(*matrice,4,4);
//printf("l'element x d'indice (4,4) : %d \n",x);
//affecterValeur(matrice,1,1,100); // signature de fonction changée
//affecterValeur(matrice,2,1,100);
//affecterValeur(matrice,3,1,100);
//affecterValeur(matrice,4,1,100);
//affecterValeur(matrice,5,1,100);
//affecterValeur(matrice,1,4,69);
//afficherMatrice(*matrice);
//afficherMatriceListes(*matrice);
//additionerMatrices(matrice,matrice2);
//afficherMatrice(*matrice);
//afficherMatriceListes(*matrice);
//printf("\n nombre d'element : %d \n",nombreElement((matrice->tab_lignes)[0]));
//printf("\n nombre d'Octets gagnes : %d \n",nombreOctetsGagnes(*matrice));
    return 0;
}
