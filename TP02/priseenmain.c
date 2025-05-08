#include <stdio.h>

void test_pointeur (void);
int plus_egal(int* pt_a, int b);
int fois_egal(int* pt_a, int b);

int main(void)
{
    test_pointeur();
    int a = 10;
    int *pt_a = &a;
    printf("Valeur de a avant plus_egal : %d\n", a);
    printf("Valeur pointée par pt_a avant plus_egal : %d\n", *pt_a);
    int c = plus_egal(pt_a, 5);
    printf("Valeur de a après plus_egal : %d\n", a);
    printf("Valeur pointée par pt_a après plus_egal : %d\n", *pt_a);
    printf("Retour de plus_egal : %d\n", c);

    a = 10;
    printf("\nValeur de a avant fois_egal : %d\n", a);
    printf("Valeur pointée par pt_a avant fois_egal : %d\n", *pt_a);
    c = fois_egal(pt_a, 5);
    printf("Valeur de a après fois_egal : %d\n", a);
    printf("Valeur pointée par pt_a après fois_egal : %d\n", *pt_a);
    printf("Retour de fois_egal : %d\n", c);
    return 0;
}

void test_pointeur (void)
{
    int a = 10;
    int *pt_a = &a;

    printf("Valeur de a : %d\n", a);
    printf("Adresse de a : %p\n", (void*)&a);
    printf("Valeur de pt_a : %p\n", (void*)pt_a);
    printf("Valeur pointée par pt_a : %d\n", *pt_a);

    *pt_a = 20; // Modification de la valeur pointée de p
    printf("Nouvelle valeur de b : %d\n", a);
}

int plus_egal(int* pt_a, int b)
{
    *pt_a += b;
    return 0;
}

int fois_egal(int* pt_a, int b)
{
    *pt_a *= b;
    return 0;
}
