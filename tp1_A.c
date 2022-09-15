/*
Fichier: tp1_A.c
Auteur: Gabriel Lavoie - GrB
But: Calculer l'imc d'un ou plusieurs patients 
Dernière mise à jour: 15SEPT22
*/

#include <stdio.h>

int main ()
{
	
	//Declaration de l'information
	float poids, taille, imc;
	char reponse;
	int nbPers = 0;
	
		do
		{
			// Compter le nombre de patient calculer
			nbPers = nbPers + 1;
			
			//Entree de donnee
			printf("Tapez le poids(kg) et la taille(m) du patient - Exemple (62.3 1.80): \n");
			scanf("%f%f", &poids, &taille);
			
			//Convertir donnee en IMC
			imc = poids/(taille*taille);
			
			//Afficher
			printf("\n Voici les informations du patient: ");
			printf("\n - Le patient pese: %.1f kg", poids);
			printf("\n - Le patient mesure: %.2f metre(s)", taille);
			printf("\n - L'IMC du patient est de: %.1f \n\n", imc);
			
			printf(" Le patient est: ");
			if(imc < 18.5)
				printf("MAIGREUR, RISQUE ELEVE A ACCRU");
			else if(imc < 25)
				printf("POIDS NORMAL, RISQUE FAIBLE");
			else if(imc < 30)
				printf("EMBONPOINT, RISQUE ELEVE");
			else
				printf("OBESITE, RISQUE TRES ELEVE");
						
			printf("\n\nVoulez vous continuer? (o/n): ");
			scanf(" %c", &reponse);	
			printf(".\n");
			
						
		} while (reponse =='o' || reponse == 'O');
		
	printf("\nAu total, %d patient(s) ont ete calcules\n", nbPers);
	
	
	return 0;
}

/* 				   EXECUTE
Tapez le poids(kg) et la taille(m) du patient - Exemple (62.3 1.80):
51 1.98

 Voici les informations du patient:
 - Le patient pese: 51.0 kg
 - Le patient mesure: 1.98 metre(s)
 - L'IMC du patient est de: 13.0

 Le patient est: MAIGREUR, RISQUE ELEVE A ACCRU

Voulez vous continuer? (o/n): o
.
Tapez le poids(kg) et la taille(m) du patient - Exemple (62.3 1.80):
69.4 1.63

 Voici les informations du patient:
 - Le patient pese: 69.4 kg
 - Le patient mesure: 1.63 metre(s)
 - L'IMC du patient est de: 26.1

 Le patient est: EMBONPOINT, RISQUE ELEVE

Voulez vous continuer? (o/n): o
.
Tapez le poids(kg) et la taille(m) du patient - Exemple (62.3 1.80):
60 1.65

 Voici les informations du patient:
 - Le patient pese: 60.0 kg
 - Le patient mesure: 1.65 metre(s)
 - L'IMC du patient est de: 22.0

 Le patient est: POIDS NORMAL, RISQUE FAIBLE

Voulez vous continuer? (o/n): o
.
Tapez le poids(kg) et la taille(m) du patient - Exemple (62.3 1.80):
100 1.72

 Voici les informations du patient:
 - Le patient pese: 100.0 kg
 - Le patient mesure: 1.72 metre(s)
 - L'IMC du patient est de: 33.8

 Le patient est: OBESITE, RISQUE TRES ELEVE

Voulez vous continuer? (o/n): n
.

Au total, 4 patient(s) ont ete calcules

--------------------------------
Process exited after 33.17 seconds with return value 0
Press any key to continue . . .
*/