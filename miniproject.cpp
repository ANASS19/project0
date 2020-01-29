#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CMAX 50
typedef struct
{
	char aut_nom[CMAX];
	char aut_prenom[CMAX];
}	Auteur;

typedef	struct {
int	liv_num;
char liv_Titre[CMAX];
Auteur liv_Auteur ;
int	liv_Emprunteur;
}Livre;


typedef	struct{
int	adr_cp;
char adr_Ville[CMAX];
char dr_Rue[CMAX];
}Adresse;
typedef	struct{
int	adh_num;
char adh_Nom[CMAX];
Adresse	adh_Adresse ;
int	adh_NbEmprunts;
}Adherent;
typedef struct node1{
	Adherent Adherents;
	node1 *next;
}node1;
typedef struct node2{
	Livre Livres;
	node2 *next;
}node2;

node1 * cree_Adh(, node1 *L) {
cellule * nem,*p;
nem= (cellule*)malloc(sizeof(cellule));
if (!nem) {
printf("allocation non reussie");
exit (1);
}
nem ? valeur = v;
nem ? suivant = NULL;
if (L == NULL) L = nem;
else {
p= dernier (L);
p ? suivant = nem;
}
return L ;
}

