#include <stdio.h>

void afficher_caractere(char car);
void alphabet(char* tableau, int taille);
void alphabet_renverse(char* tableau, int taille);
void afficher_chaine(char* chaine);

int main(void)
{
    char car = 'a';
    char tableau[26];
    
    // Q1 - Test de afficher_caractere
    printf("Test de afficher_caractere:\n");
    afficher_caractere(car);
    afficher_caractere('z');
    afficher_caractere('!');
    
    // Q2 - Test de alphabet
    printf("\nTest de alphabet:\n");
    alphabet(tableau, 26);
    
    // Q3 - Test de alphabet_renverse
    printf("\nTest de alphabet_renverse:\n");
    alphabet_renverse(tableau, 26);
    
    // Q4 - Affichage comme chaîne de caractères
    printf("\nQ4 - Test d'affichage comme chaîne:\n");
    // Remplir le tableau avec l'alphabet
    alphabet(tableau, 26);
    printf("Tableau complet: ");
    afficher_chaine(tableau);
    
    // Ajouter '\0' au milieu et réafficher
    tableau[13] = '\0';
    printf("Tableau avec '\\0' au milieu: ");
    afficher_chaine(tableau);
    
    // Q5 - Modification du tableau avant/après '\0'
    printf("\nQ5 - Modifications avec '\\0':\n");
    tableau[5] = 'X';
    tableau[20] = 'Y'; 
    tableau[10] = '\0';
    tableau[16] = '\0';
    printf("Tableau après modifications: ");
    afficher_chaine(tableau);
    
    return 0;
}

void afficher_caractere(char car)
{
    printf("Caractère: %c, Valeur entière: %d\n", car, car);
}

void alphabet(char* tableau, int taille)
{
    for (int i = 0; i < taille; i++)
    {
        tableau[i] = 'a' + i;
    }
}

void alphabet_renverse(char* tableau, int taille)
{
    for (int i = 0; i < taille; i++)
    {
        tableau[i] = 'z' - i;
    }
}

void afficher_chaine(char* chaine)
{
    printf("%s\n", chaine);
}
