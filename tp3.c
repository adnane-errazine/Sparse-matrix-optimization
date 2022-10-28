#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tp3.h"


// Fonction qui permet de cr�er un �lement d'une liste cha�n�e
// Params : indice de colonne (int), valeur de l'�lement (int)
// Return : pointeur vers le nouvele �lement cr��
element *creerElement(int colonne, int valeur) {
    element *nouvelElement = malloc(sizeof(element));
    nouvelElement->col = colonne;
    nouvelElement->val = valeur;
    nouvelElement->suivant = NULL;
    return nouvelElement;
}

matrice_creuse* creerMatriceCeuse(int N_row, int Ncol)
{
    matrice_creuse* M=malloc(sizeof(matrice_creuse));   // not sure if matrice_creuse*
    M->Nlignes=N_row;
    M->Ncolonnes=Ncol;
    M->tab_lignes= malloc(N_row*sizeof(element*));
    //element* NEWTEST= creerElement(5,5);
    int i;
    for (i=0;i<N_row;i++)
    {
        M->tab_lignes[i]=NULL;
    }
    return M;
}

void ajouterElementLigne(matrice_creuse *m,int ligne,int col,int valeur)
{
    element* NEWW=creerElement(col,valeur);
    if ( (m->tab_lignes)[ligne] == NULL)
    {
        m->tab_lignes[ligne]=NEWW;
    }
    else {
            element* temp=m->tab_lignes[ligne];
    while (temp->suivant!=NULL)
    {
        temp=temp->suivant;
    }
    temp->suivant=NEWW;
    }
}

void remplirMatrice(matrice_creuse *m, int N, int M) {   // libérer la mémoire ?
    int i,j,x;
    for (i=0;i<N;i++)
    {
        for (j=0;j<M;j++)
        {
            scanf("%d",&x);
            if (x!=0){ajouterElementLigne(m,i,j,x);}
        }
    }
}

void afficherMatrice(matrice_creuse m){

printf("On affiche la matrice de %d lignes et %d colonnes :\n",m.Nlignes,m.Ncolonnes);
    int i,past,j;
    for (int i=0;i<m.Nlignes;i++)
      { past=0;
        element* temp=(m.tab_lignes)[i];
        if(temp!=NULL)
        {
            while(temp!=NULL)
              {
                 for (j=0;j<( (temp->col)-past);j++)
                 {printf(" 0\t");}
                 printf(" %d\t",(temp->val));
                 past=(temp->col) +1;
                 temp=temp->suivant;
              }
        }
        for (j=0;j< (m.Ncolonnes - past);j++)
        {
            printf(" 0\t");
        }
    printf("\n");
    }
}


void afficherMatriceListes(matrice_creuse m) {

    int i;
    for (i=0;i<m.Nlignes;i++)
    {   printf("liste chainee de la ligne [%d] : ",i+1);
        element* temp=(m.tab_lignes)[i];
        if (temp==NULL) {printf(" NULL");}
        else {
        while(temp!=NULL)
        {   if( temp->suivant == NULL )
            {printf(" %d -> NULL",temp->val);}
            else
            {printf(" %d -> ",temp->val);}
            temp=temp->suivant;
        }
        }
        printf("\n");
    }

}


int rechercherValeur(matrice_creuse m, int i, int j) {
i--;
j--;
if(i<0  ||j< 0){fprintf(stderr, " les indices (i,j) sont incorrecte");}
element* temp=(m.tab_lignes)[i];
if (temp==NULL){return 0;}
while(temp!=NULL)
{   if(j<temp->col){return 0;}
    if(temp->col == j){return temp->val;}
    temp=temp->suivant;
}
return 0;
}


void affecterValeur(matrice_creuse* m, int i, int j, int NewVal) {

  i--;
  j--;
  if(i<0  ||j< 0){fprintf(stderr, " les indices (i,j) sont incorrecte");}
  element* temp= (m->tab_lignes)[i];
  element* NewElement=creerElement(j,NewVal);
  if(temp==NULL)
      {
        (m->tab_lignes)[i]=NewElement;
        return;
      }
  if( j < temp->col )
      {
          (m->tab_lignes)[i]=NewElement;
          NewElement->suivant=temp;
          return;

      }
      element* temp2;
  while(temp!=NULL)
    {
        if(j < temp->col) // On sait que la première itération ne peut jamais executer ce bloque de if
        {       NewElement->suivant=temp;
                temp2->suivant=NewElement;
                return;
        }
        if(temp->col == j)
        {
                temp->val=NewVal;
                return ;
        }
        temp2=temp;
        temp=temp->suivant;

    }
    temp2->suivant=NewElement;
    return;
}


void additionerMatrices(matrice_creuse m1, matrice_creuse m2) {

  /*Ecrire ici le code de cette fonction*/

}


int nombreOctetsGagnes(matrice_creuse m) {

  /*Ecrire ici le code de cette fonction*/
return 0;
}

