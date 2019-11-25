#include <stdlib.h>
#include <stdio.h>


main(){
	int vetor[3];
	int i = 0;
	
	int pA,pB;
	
	printf("WARNING");
	printf("\n THIS IS NOT SAFE FOR WORK");
	

	while (i != 3){
		
		printf("\n DIGITE UM VALOR INTEIRO, PER FAVORE: ");
		scanf("\n %i",&vetor[i]);
		i++;
		
	}

    i = 0;
    
    pA = vetor[1];
    
    while(i != 3){
    	if (pA < vetor[i]){
    	vetor[i] = pB;
		pA = vetor[i];
		i++;
		
    		
		}
    	
	}
    
    printf("\n %i %i %i",vetor[1],vetor[2],vetor[3]);;	
	
	
}

