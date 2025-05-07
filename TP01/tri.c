#include <stdio.h>

void tri(int tab[], int taille);

int main (void)
{
    int tableau[6] = {5,4,7,14,2,3};
    tri(tableau, 6);
}

void tri(int tab[], int taille)
{
    int i, j, temp;
    for (i = 0; i < taille - 1; i++)
    {
        for (j = 0; j < taille - i - 1; j++)
        {
            if (tab[j] > tab[j + 1])
            {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
    printf("Tableau trié : ");
    for (i = 0; i < taille; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}