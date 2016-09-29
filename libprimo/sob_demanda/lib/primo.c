#include <stdlib.h>
#include <stdio.h>
#include "primo.h"

int gera_primo(int n_max){
	int j, total_divisores;
	int primo = 0;
	int numero;
	
	while(!primo){
		numero = 2 + rand() % n_max;
	    total_divisores = 0;
	    // Contanto o total de divisores
	    for(j = 1; j <= numero; j++) {
	        if(numero % j == 0) {
	            total_divisores++;
	        }
	    }
	    // se existirem apenas 2 divisores, o número é primo:
	    if(total_divisores == 2) {
	        primo = 1;
	    }
	}
    if(primo){
    	return numero;
    } else{
    	return 0;
    }
}

int testa_primo(int primo){
	int e_primo = 1; //default: é primo
	int cont = 2;

	if(primo <= 1){
		e_primo = 0;
	}

	while(e_primo == 1 && cont <= (primo/2)){
		if(primo % cont == 0){
			e_primo = 0;
		}
		cont +=1;
	}

	return e_primo;
}