#ifndef TP3_H_INCLUDED
#define TP3_H_INCLUDED


// STRUCTURE ELEMENT
struct Element {
    int col;
    int val;
    struct Element *suivant;
} ;
typedef struct Element element;


typedef element* liste_ligne;


struct MatriceCreuse {
    int Nlignes;
    int Ncolonnes;
    liste_ligne *tab_lignes;
} ;
typedef struct MatriceCreuse matrice_creuse;


matrice_creuse* creerMatriceCeuse(int Nlig, int Ncol);
void remplirMatrice(matrice_creuse *m, int N, int M);
// fonctions ajoutées
element* additionLigne(element* A, element* B);
int nombreElementListe(element* A);
//
void afficherMatrice(matrice_creuse m);
void afficherMatriceListes(matrice_creuse m);
int rechercherValeur(matrice_creuse m, int i, int j);
void affecterValeur(matrice_creuse* m, int i, int j, int val);
void additionerMatrices(matrice_creuse* m1, matrice_creuse* m2);
int nombreOctetsGagnes(matrice_creuse m);


#endif // TP3_H_INCLUDED
