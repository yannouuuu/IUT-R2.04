#include <stdio.h>

void somme_et_produit (int a, int b, int* pt_somme, int* pt_produit);

int main(void)
{
    int somme = 0;
    int produit = 0;
    int* pt_somme = &somme;
    int* pt_produit = &produit;
    
    printf("Avant appel à somme_et_produit :\n");
    printf("Valeur de somme : %d\n", somme);
    printf("Valeur de produit : %d\n", produit);
    printf("Adresse de somme (pt_somme) : %p\n", (void*)pt_somme);
    printf("Adresse de produit (pt_produit) : %p\n", (void*)pt_produit);
    printf("Valeur pointée par pt_somme : %d\n", *pt_somme);
    printf("Valeur pointée par pt_produit : %d\n", *pt_produit);
    
    somme_et_produit(5, 3, pt_somme, pt_produit);
    
    printf("\nAprès appel à somme_et_produit :\n");
    printf("Valeur de somme : %d\n", somme);
    printf("Valeur de produit : %d\n", produit);
    printf("Adresse de somme (pt_somme) : %p\n", (void*)pt_somme);
    printf("Adresse de produit (pt_produit) : %p\n", (void*)pt_produit);
    printf("Valeur pointée par pt_somme : %d\n", *pt_somme);
    printf("Valeur pointée par pt_produit : %d\n", *pt_produit);
    
    return 0;
}

void somme_et_produit (int a, int b, int* pt_somme, int* pt_produit)
{
    *pt_somme = a + b;
    *pt_produit = a * b;
}