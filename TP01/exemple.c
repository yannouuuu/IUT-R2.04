/* Inclusion des librairies standards */
#include <stdio.h>
#include <unistd.h>

/* Déclaration de la fonction principale : main */
int main (void)
{
	/* Déclaration des variables */
	int i = 4;

	/* Initialisation des variables */
	sleep(5); // Pause de 5 secondes

	/* Corps de la fonction */
	printf("J'ai mangé %d pommes\n",i);

	/* Envoie de la valeur de retour (nombre d'erreurs) */
	return 0;

	
}
