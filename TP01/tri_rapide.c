/* partitionner(tableau T, entier premier, entier dernier, entier pivot)
    échanger T[pivot] et T[dernier]  // échange le pivot avec le dernier du tableau , le pivot devient le dernier du tableau
    j := premier
    pour i de premier à dernier - 1 // la boucle se termine quand i = (dernier élément du tableau).
        si T[i] <= T[dernier] alors
            échanger T[i] et T[j]
            j := j + 1
    échanger T[dernier] et T[j]
    renvoyer j

tri_rapide(tableau T, entier premier, entier dernier)
        si premier < dernier alors
            pivot := choix_pivot(T, premier, dernier)
            pivot := partitionner(T, premier, dernier, pivot)
            tri_rapide(T, premier, pivot-1)
            tri_rapide(T, pivot+1, dernier)
 */

#include <stdio.h>

void partitionner(int tab[], int premier, int dernier, int pivot);
void tri_rapide(int tab[], int premier, int dernier);

int main (void)
{
    int tableau[6] = {5,4,7,14,2,3};
    tri_rapide(tableau, 0, 5);
    int i;
    for (i = 0; i < 6; i++)
    {
        printf("%d ", tableau[i]);
    }
    return 0;
}

void partitionner(int tab[], int premier, int dernier, int pivot)
{
    int i, j, temp;
    temp = tab[pivot];
    tab[pivot] = tab[dernier];
    tab[dernier] = temp;
    j = premier;

    for (i = premier; i < dernier; i++)
    {
        if (tab[i] <= tab[dernier])
        {
            temp = tab[i];
            tab[i] = tab[j];
            tab[j] = temp;
            j++;
        }
    }
    temp = tab[dernier];
    tab[dernier] = tab[j];
    tab[j] = temp;
}

void tri_rapide(int tab[], int premier, int dernier)
{
    if (premier < dernier)
    {
        int pivot = (premier);
        partitionner(tab, premier, dernier, pivot);
        tri_rapide(tab, premier, pivot - 1);
        tri_rapide(tab, pivot + 1, dernier);
    }
}