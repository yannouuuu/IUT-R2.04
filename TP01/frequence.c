#include <stdio.h>

void tri(char tab[], int taille) {
    int freq[256] = {0};
    int i, j;
    char temp;

    for(i = 0; i < taille; i++) {
        freq[tab[i]]++;
    }

    for(i = 0; i < taille-1; i++) {
        for(j = 0; j < taille-i-1; j++) {
            if(freq[tab[j]] < freq[tab[j+1]] || 
              (freq[tab[j]] == freq[tab[j+1]] && tab[j] > tab[j+1])) {
                temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
        }
    }
}

int main(void) {
    char tableau[10] = {'r', 't', 'd', 'a', 'p', 'b', 'd', 'p', 'b', 'p'};
    int i;

    printf("Tableau initial:\n");
    for(i = 0; i < 10; i++) {
        printf("tableau[%d] contient %c\n", i, tableau[i]);
    }

    tri(tableau, 10);

    printf("\nTableau trié par fréquence:\n");
    for(i = 0; i < 10; i++) {
        printf("tableau[%d] contient %c\n", i, tableau[i]);
    }

    return 0;
}
