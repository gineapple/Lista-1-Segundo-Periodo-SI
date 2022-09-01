#include <stdio.h>
#include "vetlib.h"


void main(){
	
	int quantidade;
	
	
	printf("Insira a quantidade de elementos: ");
	scanf("%d", &quantidade);
	int vet[quantidade];
	
	leiaVetor(vet, quantidade);
	printf("\n O maior valor dos elementos: %d\n\n", maiorValor(vet, quantidade));
	printaVetor(vet, quantidade);
		
}
