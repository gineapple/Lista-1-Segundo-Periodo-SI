#include <stdio.h>
#include <stdlib.h>
#include "vetlib.h"

int main(){
	
	int quantidade;
	
	printf("Insira a quantidade de elementos: ");
	scanf("%d", &quantidade);
	int vet[quantidade];
	geraVetor(vet, quantidade, 20);
	
	printf("\nA quantidade de elementos impares no vetor: %d", contaImpar(vet, quantidade));
	
	return 0;
}
