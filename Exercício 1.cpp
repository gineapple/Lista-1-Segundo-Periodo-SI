#include <stdio.h>
#include "vetlib.h"

int main(){
	
	int quantidade, vet[100];
	
	printf("Insira a quantidade de elementos do vetor: ");
	scanf("%d", &quantidade);

	leiaVetor(vet, quantidade);
	printf("A soma dos valores do vetor é: %d", somaVetor(vet, quantidade));
	
	return 0;
}
