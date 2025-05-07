#include <stdio.h>

void conversion(float devise, float taux_change);

int main (void)
{
    float devise = 60.0;
    float taux_change = 1.09;
    conversion(devise, taux_change);
    return 0;
}

void conversion(float devise, float taux_change)
{
    float resultat;
    resultat = devise * taux_change;
    printf("Alice et Bob ont %.2f euros après conversion.\n", resultat);
    printf("Ils gardent donc %.2f euros chacun.\n", resultat/2);
}
