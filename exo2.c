#include <stdio.h>
#include <math.h>
#define NFOIS 5
int main() {
	char op;
	int n1, n2, res;

	printf("Opération souhaitée : + ou * ? ");
	scanf_s("%c", &op);
	printf("Veuillez donner deux nombres entiers");
	scanf_s("%d %d", &n1, &n2);
	if (op == '+') {
		res = n1 + n2;
		printf("Leur somme est : %d", res);
	}
	else {
		res = n1 * n2;
		printf("Leur produit est : %d", res);
	}
}