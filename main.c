#include <stdio.h>
#include <stdlib.h>
#include "tp3.h"



int main()
{
  //int* *t=(int*) malloc(10*sizeof(int*)); //
int N,M;
printf("Veuillez saisir N: le nombre des lignes  puis M le nombre des colonnes respectivement : \n");
scanf("%d %d",&N,&M);
matrice_creuse* matrice=creerMatriceCeuse(N,M);
remplirMatrice(matrice,N,M);
afficherMatrice(*matrice);
afficherMatriceListes(*matrice);
int x=rechercherValeur(*matrice,4,4);
printf("l'element x d'indice (4,4) : %d \n",x);
affecterValeur(matrice,1,1,100); // j'ai changé la signature de cette fonction !!! faut demander au prof l'autorisation.
affecterValeur(matrice,2,1,100);
affecterValeur(matrice,3,1,100);
affecterValeur(matrice,4,1,100);
affecterValeur(matrice,5,1,100);
affecterValeur(matrice,1,4,69);
afficherMatrice(*matrice);
afficherMatriceListes(*matrice);
    return 0;
}
