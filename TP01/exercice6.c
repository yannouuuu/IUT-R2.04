#include <stdio.h>

void affiche_tableau(int tab[], int taille);

int main (void)
{
    int tableau[3] = {5, 4, 7};
    affiche_tableau(tableau, 3);
    
    int grand_tableau[100];
    affiche_tableau(grand_tableau, 100);
    return 0;
}

void affiche_tableau(int tab[], int taille)
{
    for (int i = 0; i < taille; i++)
    {
        printf("tableau[%d] contient %d\n", i, tab[i]);
    }
}
