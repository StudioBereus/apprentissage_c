#include <stdio.h>
#include <math.h>
#define NFOIS 5
int main() {
	int i; 
	float x;
	float racx;

	printf("Bonjour \n Je vais vous calculer %d racines carrées \n", NFOIS);
	for (i = 0; i < NFOIS; i++) {
		printf("Donnez un nombre");
		scanf_s("%f", &x);
		if (x < 0.0) {
			printf("Le nombre %f ne possède pas de racine carrée \n", x);
		}
		else {
			racx = sqrt(x);
			printf("Le nombre %f a pour racinne carrée : %f \n", x, racx);
		}
	}
	printf("Travail terminé");
}