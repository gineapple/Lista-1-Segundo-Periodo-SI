#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main(){
	
	char mens[100];
	int num;
	
	printf("Digite a mensagem a ser decodificada: ");
	gets(mens);
	num = strlen(mens);
	
	printf("Mensagem decodificada: \n");
	for(int i = 0; i < num; i++){
		if(mens[i] != 'p'){
			printf("%c", mens[i]);
		}else if(mens[i - 1] == 'p' && mens[i + 1] == 'p'){
			printf("%c", mens[i]);
		}
	}
}
