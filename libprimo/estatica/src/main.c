#include <stdio.h>

#include <primo.h>
int main(int argc, char ** argv[]){
	int numero = atoi(argv[1]);
	int n_max = atoi(argv[2]);
	printf("gerando um numero primo de 0 a %d: %d\n", n_max, gera_primo(n_max));

	printf("Testando o numero de entrada:\n\n");

	if(testa_primo(numero)){
		printf("%d e primo!!\n", numero);
	} else{
		printf("%d nao e primo!!\n", numero);
	}

}