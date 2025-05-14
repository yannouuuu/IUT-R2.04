#include <stdio.h>
#include <stdlib.h>

char* nouveau_tableau (int taille);
void initialise_tableau (char* tableau, int taille, char car);
void affiche_tableau (char* tableau, int taille);
void liberation_du_tableau (char* tableau);
void place_dans_tableau (char* tableau, int taille, int indice, char car);
char lecture_du_tableau (char* tableau, int taille, int indice);

int main(void)
{
    // Création d'un tableau de taille 4
    char* t = nouveau_tableau(4);

    // Initialisation avec 'a'
    initialise_tableau(t, 4, 'a');
    
    // Placement des caractères 't' et 'u'
    place_dans_tableau(t, 4, 1, 't');
    place_dans_tableau(t, 4, 5, 'u');  // Ceci devrait provoquer une erreur
    
    // Test de lecture des cases 0 à 6
    for(int i = 0; i < 7; i++) {
        printf("Case %d : ", i);
        char valeur = lecture_du_tableau(t, 4, i);
        printf("contient %c\n", valeur);
    }
    
    // Libération de la mémoire
    liberation_du_tableau(t);
    
    return 0;
}

char* nouveau_tableau (int taille)
{
    char* tableau = (char*)malloc(taille * sizeof(char));
    return tableau;
}

void initialise_tableau (char* tableau, int taille, char car)
{
    for (int i = 0; i < taille; i++) {
        tableau[i] = car;
    }
}

void affiche_tableau (char* tableau, int taille)
{
    for (int i = 0; i < taille; i++) {
        printf("%c ", tableau[i]);
    }
    printf("\n");
}

void liberation_du_tableau (char* tableau)
{
    free(tableau);
}

void place_dans_tableau (char* tableau, int taille, int indice, char car)
{
    tableau[indice] = car;
}

char lecture_du_tableau (char* tableau, int taille, int indice)
{
    if (indice >= taille || indice < 0)
    {
        printf("Erreur : l'indice %d est invalide pour un tableau de taille %d\n", indice, taille);
        exit(1);
    }
    return tableau[indice];
}

