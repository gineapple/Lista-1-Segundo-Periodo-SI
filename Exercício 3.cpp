#include <stdio.h>
#include "vetlib.h"

void main(){
	
	int quantidade;
	
	
	printf("Digite a quantidade de elementos: ");
	scanf("%d", &quantidade);
	int vet[quantidade];
	
	leiaVetor(vet, quantidade);
	printf("\nO menor valor desses elementos é: %d\n\n", menorValor(vet, quantidade));
	printaVetor(vet, quantidade);
		
}
