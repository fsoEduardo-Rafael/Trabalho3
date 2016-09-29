#include <stdio.h>
#include <dlfcn.h>
#include <stdlib.h>

int main(int argc, char ** argv[]){
	int numero = atoi(argv[1]);
	int n_max = atoi(argv[2]);
	void *handle;
	int (*gera_primo) (int);
	int (*testa_primo) (int);
	char *error;

	handle = dlopen ("build/libprimo.so", RTLD_LAZY); 
	if (!handle) {
        fputs (dlerror(), stderr);
        exit(1);
    }
    gera_primo = dlsym(handle, "gera_primo");
    testa_primo = dlsym(handle, "testa_primo");
    if ((error = dlerror()) != NULL)  {
        fputs(error, stderr);
        exit(1);
    }

	printf("gerando um numero primo de 0 a %d: %d\n", n_max, (*gera_primo)(n_max));

	printf("Testando o numero de entrada:\n\n");

	if((*testa_primo)(numero)){
		printf("%d e primo!!\n", numero);
	} else{
		printf("%d nao e primo!!\n", numero);
	}

}