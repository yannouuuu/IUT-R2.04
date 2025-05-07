#include <stdio.h>

void affiche_entier (int n);
int produit (int a, int b);
void modifie_a (int a);

int main (void)
{
    affiche_entier(42);
    affiche_entier(7);
    affiche_entier(100);
    printf("Le produit est : %d\n", produit(2,3));
    printf("Le produit est : %d\n", produit(5,4));
    printf("Le produit est : %d\n", produit(10,10));
    int a = 10;
    modifie_a(a);
    printf("Dans le main, a vaut : %d\n", a);
}

void affiche_entier (int n)
{
    printf("La fonction vous affiche l'entier : %d\n", n);
}

int produit (int a, int b)
{
    return a * b;
}

void modifie_a (int a)
{
    a = a + 1;
    printf("Dans modifie_a, a vaut : %d\n", a);
}