#include <stdlib.h>
#include "primo.h"

int gera_primo(){
	int j, totalDivisores;
	int nMax = 10000;
	int primo = 0;
	int numero;
	
	while(!primo){
		numero = 2 + rand() % 100000;

	    totalDivisores = 0;
	    // Contanto o total de divisores
	    for(j = 1; j <= numero; j++) {
	        if(numero % j == 0) {
	            totalDivisores++;
	        }
	    }
	    // se existirem apenas 2 divisores, o número é primo:
	    if(totalDivisores == 2) {
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