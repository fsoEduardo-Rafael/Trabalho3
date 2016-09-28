#include <stdio.h>

#include <primo.h>
int main(int argc, char ** argv[]){
	int numero = atoi(argv[1]);
	printf("Testando:");
	printf("gerando um numero primo:%d\n\n", gera_primo());

	printf("Agora vou testar o numero\n\n");

	if(testa_primo(numero)){
		printf("este numero e primo: %d\n", numero);
	} else{
		printf(" %d nao e primo!!", numero);
	}

}