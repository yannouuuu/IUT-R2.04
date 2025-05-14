#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char* tableau;
  int taille;
} super_tableau_t;

char* nouveau_tableau(int taille);
void affiche_tableau(char* tableau, int taille);
super_tableau_t* nouveau_super_tableau(int taille);
void initialise_super_tableau(super_tableau_t* super_tab, char car);
void affiche_super_tableau(super_tableau_t* super_tab);
void liberation_du_super_tableau(super_tableau_t* super_tab);
void place_dans_super_tableau(super_tableau_t* super_tab, int indice, char car);
char lecture_du_super_tableau(super_tableau_t* super_tab, int indice);
int taille_super_tableau(super_tableau_t* super_tab);

int main(void)
{
    super_tableau_t* super_tab = nouveau_super_tableau(4);
    initialise_super_tableau(super_tab, 'a');
    place_dans_super_tableau(super_tab, 2, 'e');
    affiche_super_tableau(super_tab);

    place_dans_super_tableau(super_tab, 1, 't');
    place_dans_super_tableau(super_tab, 5, 'u');

    for(int i = 0; i < 7; i++) {
        printf("Case %d : ", i);
        char valeur = lecture_du_super_tableau(super_tab, i);
        printf("contient %c\n", valeur);
    }

    liberation_du_super_tableau(super_tab);
    return 0;
}

char* nouveau_tableau(int taille)
{
    char* tableau = (char*)malloc(taille * sizeof(char));
    return tableau;
}

void affiche_tableau(char* tableau, int taille)
{
    for (int i = 0; i < taille; i++) {
        printf("%c ", tableau[i]);
    }
    printf("\n");
}

super_tableau_t* nouveau_super_tableau(int taille)
{
    super_tableau_t* super_tab = (super_tableau_t*)malloc(sizeof(super_tableau_t));
    super_tab->taille = taille;
    super_tab->tableau = nouveau_tableau(taille);
    return super_tab;
}

void initialise_super_tableau(super_tableau_t* super_tab, char car)
{
    for(int i = 0; i < super_tab->taille; i++) {
        super_tab->tableau[i] = car;
    }
}

void affiche_super_tableau(super_tableau_t* super_tab)
{
    affiche_tableau(super_tab->tableau, super_tab->taille);
}

void liberation_du_super_tableau(super_tableau_t* super_tab)
{
    free(super_tab->tableau);
    free(super_tab);
}

void place_dans_super_tableau(super_tableau_t* super_tab, int indice, char car)
{
    if(indice >= super_tab->taille || indice < 0) {
        printf("Erreur : l'indice %d est invalide pour un tableau de taille %d\n", 
               indice, super_tab->taille);
        exit(1);
    }
    super_tab->tableau[indice] = car;
}

char lecture_du_super_tableau(super_tableau_t* super_tab, int indice)
{
    if(indice >= super_tab->taille || indice < 0) {
        printf("Erreur : l'indice %d est invalide pour un tableau de taille %d\n", 
               indice, super_tab->taille);
        exit(1);
    }
    return super_tab->tableau[indice];
}

int taille_super_tableau(super_tableau_t* super_tab)
{
    return super_tab->taille;
}