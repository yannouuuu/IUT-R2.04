#include <stdio.h>

int max_tableau(int tab[], int taille);

int main (void)
{
    int tab[] = {1, 2, 3, 4, 5};
    int position = max_tableau(tab, 5);
    return 0;
}

int max_tableau(int tab[], int taille)
{
    int max = tab[0];
    int position = 0;
    for (int i = 1; i < taille; i++)
    {
        if (tab[i] > max)
        {
            max = tab[i];
            position = i;
        }
    }
    printf("La valeur maximale est : %d\n", max);
    printf("Elle se trouve en position : %d\n", position);
}