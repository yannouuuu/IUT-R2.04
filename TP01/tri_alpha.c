#include <stdio.h>

void tri(int tab[], int taille);

int main (void)
{
    int tableau[6] = {'r', 't', 'd', 'a', 'p', 'b'};
    int i;

    printf("Tableau initial : ");
    for (i = 0; i < 6; i++) {
        printf("%c ", tableau[i]);
    }
    printf("\n");

    tri(tableau, 6);

    printf("Tableau trié : ");
    for (i = 0; i < 6; i++) {
        printf("%c ", tableau[i]);
    }
    printf("\n");

    return 0;
}
void tri(int tab[], int taille)
{
    int i, j;
    char temp;

    for (i = 0; i < taille - 1; i++) {
        for (j = 0; j < taille - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}