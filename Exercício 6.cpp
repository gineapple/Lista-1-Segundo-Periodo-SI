#include <stdio.h>
#include "vetlib.h"

int advinha(int v[], int n, int x){
	int certo = 0;
	for(int i = 0; i < n; i++){
		if(x == v[i]){
			certo = 1;
			return certo;
		}
	}
	return certo;
}

void main(){
	int num, adv;
	printf("Insira a quantidade de numeros para sorteio: ");
	
	scanf("%d", &num);
	int vet[num];
	geraVetor(vet, num, 50);
	
	printf("\n\nTente adivinhar um numero: ");
	scanf("%d", &adv);
	if(advinha(vet, num, adv) == 1){
		printf("Que sorte, o numero %d foi sorteado!\n\n", adv);
		printaVetor(vet, num);
	}else{
		printf("Que pena, o numero %d não foi sorteado.\n\n", adv);
		printaVetor(vet, num);
	}

}
